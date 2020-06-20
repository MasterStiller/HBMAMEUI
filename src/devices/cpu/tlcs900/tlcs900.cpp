// license:BSD-3-Clause
// copyright-holders:Wilbert Pol
/*******************************************************************

Toshiba TLCS-900/H emulation

This code only supports the 900/H mode which is needed for Neogeo
Pocket emulation. The 900 and 900/M modes are not supported yet.


TODO:
- review cycle counts
- implement the remaining internal mcu features (serial transfer, etc)
- add support for 900 and 900/M modes

*******************************************************************/

#include "emu.h"
#include "tlcs900.h"
#include "dasm900.h"


tlcs900h_device::tlcs900h_device(const machine_config &mconfig, device_type type, const char *tag, device_t *owner, uint32_t clock) :
	cpu_device(mconfig, type, tag, owner, clock),
	m_am8_16(0)
{
}

device_memory_interface::space_config_vector tlcs900h_device::memory_space_config() const
{
	return space_config_vector {
		std::make_pair(AS_PROGRAM, &m_program_config)
	};
}


std::unique_ptr<util::disasm_interface> tlcs900h_device::create_disassembler()
{
	return std::make_unique<tlcs900_disassembler>();
}


/* Flag defines */
#define FLAG_CF     0x01
#define FLAG_NF     0x02
#define FLAG_VF     0x04
#define FLAG_HF     0x10
#define FLAG_ZF     0x40
#define FLAG_SF     0x80


inline uint8_t tlcs900h_device::RDOP()
{
	uint8_t data;

	if ( m_prefetch_clear )
	{
		for ( int i = 0; i < 4; i++ )
		{
			m_prefetch[ i ] = RDMEM( m_pc.d + i );
		}
		m_prefetch_index = 0;
		m_prefetch_clear = false;
	}
	else
	{
		m_prefetch[ m_prefetch_index ] = RDMEM( m_pc.d + 3 );
		m_prefetch_index = ( m_prefetch_index + 1 ) & 0x03;
	}
	data = m_prefetch[ m_prefetch_index ];
	m_pc.d++;
	return data;
}


void tlcs900h_device::device_start()
{
	m_program = &space( AS_PROGRAM );

	m_pc.d = 0;
	memset(m_xwa, 0x00, sizeof(m_xwa));
	memset(m_xbc, 0x00, sizeof(m_xbc));
	memset(m_xde, 0x00, sizeof(m_xde));
	memset(m_xhl, 0x00, sizeof(m_xhl));
	m_xix.d = 0;
	m_xiy.d = 0;
	m_xiz.d = 0;
	m_xnsp.d = 0;
	m_xssp.d = 0;
	memset(m_dmas, 0x00, sizeof(m_dmas));
	memset(m_dmad, 0x00, sizeof(m_dmad));
	memset(m_dmac, 0x00, sizeof(m_dmac));
	memset(m_dmam, 0x00, sizeof(m_dmam));

	save_item( NAME(m_xwa) );
	save_item( NAME(m_xbc) );
	save_item( NAME(m_xde) );
	save_item( NAME(m_xhl) );
	save_item( NAME(m_xix) );
	save_item( NAME(m_xiy) );
	save_item( NAME(m_xiz) );
	save_item( NAME(m_xssp) );
	save_item( NAME(m_xnsp) );
	save_item( NAME(m_pc) );
	save_item( NAME(m_sr) );
	save_item( NAME(m_f2) );
	save_item( NAME(m_dmas) );
	save_item( NAME(m_dmad) );
	save_item( NAME(m_dmac) );
	save_item( NAME(m_dmam) );
	save_item( NAME(m_timer_pre) );
	save_item( NAME(m_timer) );
	save_item( NAME(m_timer_change) );
	save_item( NAME(m_level) );
	save_item( NAME(m_check_irqs) );
	save_item( NAME(m_ad_cycles_left) );
	save_item( NAME(m_nmi_state) );
	save_item( NAME(m_prefetch_clear) );
	save_item( NAME(m_prefetch_index) );
	save_item( NAME(m_prefetch) );
	save_item( NAME(m_halted) );
	save_item( NAME(m_regbank) );

	state_add( TLCS900_PC,    "PC",    m_pc.d ).formatstr("%08X");
	state_add( TLCS900_XWA0,  "XWA0",  m_xwa[0].d ).formatstr("%08X");
	state_add( TLCS900_XBC0,  "XBC0",  m_xbc[0].d ).formatstr("%08X");
	state_add( TLCS900_XDE0,  "XDE0",  m_xde[0].d ).formatstr("%08X");
	state_add( TLCS900_XHL0,  "XHL0",  m_xhl[0].d ).formatstr("%08X");
	state_add( TLCS900_XWA1,  "XWA1",  m_xwa[1].d ).formatstr("%08X");
	state_add( TLCS900_XBC1,  "XBC1",  m_xbc[1].d ).formatstr("%08X");
	state_add( TLCS900_XDE1,  "XDE1",  m_xde[1].d ).formatstr("%08X");
	state_add( TLCS900_XHL1,  "XHL1",  m_xhl[1].d ).formatstr("%08X");
	state_add( TLCS900_XWA2,  "XWA2",  m_xwa[2].d ).formatstr("%08X");
	state_add( TLCS900_XBC2,  "XBC2",  m_xbc[2].d ).formatstr("%08X");
	state_add( TLCS900_XDE2,  "XDE2",  m_xde[2].d ).formatstr("%08X");
	state_add( TLCS900_XHL2,  "XHL2",  m_xhl[2].d ).formatstr("%08X");
	state_add( TLCS900_XWA3,  "XWA3",  m_xwa[3].d ).formatstr("%08X");
	state_add( TLCS900_XBC3,  "XBC3",  m_xbc[3].d ).formatstr("%08X");
	state_add( TLCS900_XDE3,  "XDE3",  m_xde[3].d ).formatstr("%08X");
	state_add( TLCS900_XHL3,  "XHL3",  m_xhl[3].d ).formatstr("%08X");
	state_add( TLCS900_XIX,   "XIX",   m_xix.d ).formatstr("%08X");
	state_add( TLCS900_XIY,   "XIY",   m_xiy.d ).formatstr("%08X");
	state_add( TLCS900_XIZ,   "XIZ",   m_xiz.d ).formatstr("%08X");
	state_add( TLCS900_XNSP,  "XNSP",  m_xnsp.d ).formatstr("%08X");
	state_add( TLCS900_XSSP,  "XSSP",  m_xssp.d ).formatstr("%08X");
	state_add( TLCS900_DMAS0, "DMAS0", m_dmas[0].d ).formatstr("%08X");
	state_add( TLCS900_DMAD0, "DMAD0", m_dmad[0].d ).formatstr("%08X");
	state_add( TLCS900_DMAC0, "DMAC0", m_dmac[0].w.l ).formatstr("%04X");
	state_add( TLCS900_DMAM0, "DMAM0", m_dmam[0].b.l ).formatstr("%02X");
	state_add( TLCS900_DMAS1, "DMAS1", m_dmas[1].d ).formatstr("%08X");
	state_add( TLCS900_DMAD1, "DMAD1", m_dmad[1].d ).formatstr("%08X");
	state_add( TLCS900_DMAC1, "DMAC1", m_dmac[1].w.l ).formatstr("%04X");
	state_add( TLCS900_DMAM1, "DMAM1", m_dmam[1].b.l ).formatstr("%02X");
	state_add( TLCS900_DMAS2, "DMAS2", m_dmas[2].d ).formatstr("%08X");
	state_add( TLCS900_DMAD2, "DMAD2", m_dmad[2].d ).formatstr("%08X");
	state_add( TLCS900_DMAC2, "DMAC2", m_dmac[2].w.l ).formatstr("%04X");
	state_add( TLCS900_DMAM2, "DMAM2", m_dmam[2].b.l ).formatstr("%02X");
	state_add( TLCS900_DMAS3, "DMAS3", m_dmas[3].d ).formatstr("%08X");
	state_add( TLCS900_DMAD3, "DMAD3", m_dmad[3].d ).formatstr("%08X");
	state_add( TLCS900_DMAC3, "DMAC3", m_dmac[3].w.l ).formatstr("%04X");
	state_add( TLCS900_DMAM3, "DMAM3", m_dmam[3].b.l ).formatstr("%02X");

	state_add( STATE_GENPC, "GENPC", m_pc.d ).noshow();
	state_add( STATE_GENPCBASE, "CURPC", m_pc.d ).noshow();
	state_add( STATE_GENFLAGS, "GENFLAGS", m_sr.w.l ).formatstr("%12s").noshow();

	set_icountptr(m_icount);
}

void tlcs900h_device::device_reset()
{
	m_pc.b.l = RDMEM( 0xFFFF00 );
	m_pc.b.h = RDMEM( 0xFFFF01 );
	m_pc.b.h2 = RDMEM( 0xFFFF02 );
	m_pc.b.h3 = 0;
	/* system mode, iff set to 111, max mode, register bank 0 */
	m_sr.d = 0xF800;
	m_regbank = 0;
	m_xssp.d = 0x0100;
	m_halted = 0;
	m_check_irqs = 0;
	m_prefetch_clear = true;
}


void tlcs900h_device::state_string_export(const device_state_entry &entry, std::string &str) const
{
	switch (entry.index())
	{
		case STATE_GENFLAGS:
			str = string_format("%c%d%c%d%c%c%c%c%c%c%c%c",
					m_sr.w.l & 0x8000 ? 'S' : 'U',
					( m_sr.w.l & 0x7000 ) >> 12,
					m_sr.w.l & 0x0800 ? 'M' : 'N',
					( m_sr.w.l & 0x0700 ) >> 8,
					m_sr.w.l & 0x0080 ? 'S' : '.',
					m_sr.w.l & 0x0040 ? 'Z' : '.',
					m_sr.w.l & 0x0020 ? '1' : '.',
					m_sr.w.l & 0x0010 ? 'H' : '.',
					m_sr.w.l & 0x0008 ? '1' : '.',
					m_sr.w.l & 0x0004 ? 'V' : '.',
					m_sr.w.l & 0x0002 ? 'N' : '.',
					m_sr.w.l & 0x0001 ? 'C' : '.' );
			break;
	}
}


#include "900tbl.hxx"


void tlcs900h_device::execute_run()
{
	do
	{
		const tlcs900inst *inst;

		m_cycles = 0;

		if ( m_check_irqs )
		{
			tlcs900_check_irqs();
			m_check_irqs = 0;
		}

		debugger_instruction_hook( m_pc.d );

		if ( m_halted )
		{
			m_cycles += 8;
		}
		else
		{
			m_op = RDOP();
			inst = &s_mnemonic[m_op];
			prepare_operands( inst );

			/* Execute the instruction */
			(this->*inst->opfunc)();
			m_cycles += inst->cycles;
		}

		tlcs900_handle_ad();

		tlcs900_handle_timers();

		tlcs900_check_hdma();

		m_icount -= m_cycles;
	} while ( m_icount > 0 );
}
