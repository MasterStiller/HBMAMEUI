// license:BSD-3-Clause
// copyright-holders:Mike Appolo
/*************************************************************************

    Atari Major Havoc hardware

*************************************************************************/

#include "machine/timer.h"
#include "sound/pokey.h"
#include "sound/tms5220.h"
#include "sound/okim6295.h"
#include "video/avgdvg.h"
#include "video/vector.h"


#define MHAVOC_CLOCK        10000000
#define MHAVOC_CLOCK_5M     (MHAVOC_CLOCK/2)
#define MHAVOC_CLOCK_2_5M   (MHAVOC_CLOCK/4)
#define MHAVOC_CLOCK_1_25M  (MHAVOC_CLOCK/8)
#define MHAVOC_CLOCK_625K   (MHAVOC_CLOCK/16)

#define MHAVOC_CLOCK_156K   (MHAVOC_CLOCK_625K/4)
#define MHAVOC_CLOCK_5K     (MHAVOC_CLOCK_625K/16/8)
#define MHAVOC_CLOCK_2_4K   (MHAVOC_CLOCK_625K/16/16)

#define OKI_CLOCK           1056000


class mhavoc_hbmame : public driver_device
{
public:
	mhavoc_hbmame(const machine_config &mconfig, device_type type, const char *tag) :
		driver_device(mconfig, type, tag),
		m_zram0(*this, "zram0"),
		m_zram1(*this, "zram1"),
		m_alpha(*this, "alpha"),
		m_gamma(*this, "gamma"),
		m_beta(*this, "beta"),
		m_avg(*this, "avg"),
		m_comram(*this, "comram"),
		m_pokey(*this, "pokey%u", 1U),
		m_tms(*this, "tms"),
		m_oki(*this, "oki"),
		m_lamps(*this, "lamp%u", 0U),
		m_coin(*this, "COIN"),
        m_cabinet(*this, "CABINET"),
		m_service(*this, "SERVICE")
	{ }

	void mhavoc_common(machine_config &config);
	void mhavocpe_lpc(machine_config &config); //HBMAME
	void mhavocpe_adpcm(machine_config &config); //HBMAME

	DECLARE_CUSTOM_INPUT_MEMBER(coin_service_r);
    DECLARE_CUSTOM_INPUT_MEMBER(coin_cabinet_l);
	DECLARE_READ_LINE_MEMBER(gamma_rcvd_r);
	DECLARE_READ_LINE_MEMBER(gamma_xmtd_r);
	DECLARE_READ_LINE_MEMBER(gamma_tirdy_r);
	DECLARE_READ_LINE_MEMBER(alpha_rcvd_r);
	DECLARE_READ_LINE_MEMBER(alpha_xmtd_r);
	DECLARE_READ_LINE_MEMBER(clock_r);

private:
	uint8_t dual_pokey_r(offs_t offset);
	void dual_pokey_w(offs_t offset, uint8_t data);
	void mhavoc_alpha_irq_ack_w(uint8_t data);
	void mhavoc_gamma_irq_ack_w(uint8_t data);
	void oki_w(offs_t offset, uint8_t data);
	void mhavoc_gamma_w(uint8_t data);
	uint8_t mhavoc_alpha_r();
	void mhavoc_alpha_w(uint8_t data);
	uint8_t mhavoc_gamma_r();
	void mhavoc_ram_banksel_w(uint8_t data);
	void mhavoc_rom_banksel_w(uint8_t data);
	void mhavoc_out_0_w(uint8_t data);
	void mhavocpe_out_0_w(uint8_t data);
	void alphaone_out_0_w(uint8_t data);
	void mhavoc_out_1_w(uint8_t data);
	void mhavocrv_speech_data_w(uint8_t data);
	void mhavocrv_speech_strobe_w(uint8_t data);
	uint8_t quad_pokeyn_r(offs_t offset);
	uint8_t leta_r(offs_t offset);
	void quad_pokeyn_w(offs_t offset, uint8_t data);

	TIMER_CALLBACK_MEMBER(delayed_gamma_w);
	TIMER_DEVICE_CALLBACK_MEMBER(mhavoc_cpu_irq_clock);
	void alpha_map(address_map &map);
	void alphaone_map(address_map &map);
	void gamma_map(address_map &map);
	void alphape_map(address_map &map); //HBMAME
	void gammape_lpc_map(address_map &map); //HBMAME
	void gammape_adpcm_map(address_map &map); //HBMAME
	void betape_map(address_map &map); //HBMAME

	virtual void machine_start() override;
	virtual void machine_reset() override;

	required_shared_ptr<uint8_t> m_zram0;
	required_shared_ptr<uint8_t> m_zram1;
	required_device<cpu_device> m_alpha;
	optional_device<cpu_device> m_gamma;
	optional_device<cpu_device> m_beta;
	required_device<avg_device> m_avg;
	required_shared_ptr<uint8_t> m_comram;
	optional_device_array<pokey_device, 4> m_pokey;
	optional_device<tms5220_device> m_tms;
	optional_device<okim6295_device> m_oki;
	output_finder<2> m_lamps;
	optional_ioport m_coin;
    optional_ioport m_cabinet;
	optional_ioport m_service;	

	uint8_t m_alpha_data = 0U;
	uint8_t m_alpha_rcvd = 0U;
	uint8_t m_alpha_xmtd = 0U;
	uint8_t m_gamma_data = 0U;
	uint8_t m_gamma_rcvd = 0U;
	uint8_t m_gamma_xmtd = 0U;
	uint8_t m_player_1 = 0U;
	uint8_t m_alpha_irq_clock = 0U;
	uint8_t m_alpha_irq_clock_enable = 0U;
	uint8_t m_gamma_irq_clock = 0U;
	uint8_t m_has_gamma_cpu = 0U;
	uint8_t m_has_beta_cpu = 0U;
	uint8_t m_speech_write_buffer = 0U;
};

