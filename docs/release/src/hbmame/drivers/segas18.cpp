// license:BSD-3-Clause
// copyright-holders:Robbbert
// Thanks-to: Various people who shall remain unnamed for their own safety
#include "../mame/drivers/segas18.cpp"

static INPUT_PORTS_START( aquario )
	PORT_INCLUDE( system18_generic )

	PORT_MODIFY("DSW")
	PORT_DIPNAME( 0x01, 0x01, "Credits to Start" ) PORT_DIPLOCATION("SW2:1")
	PORT_DIPSETTING(    0x01, "1")
	PORT_DIPSETTING(    0x00, "2")
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Demo_Sounds ) ) PORT_DIPLOCATION("SW2:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x0c, 0x00, "Number of Players" ) PORT_DIPLOCATION("SW2:3,4")
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x04, "2" )
	PORT_DIPSETTING(    0x0c, "3" )
	PORT_DIPSETTING(    0x08, "4" )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Difficulty ) ) PORT_DIPLOCATION("SW2:5")
	PORT_DIPSETTING(    0x00, DEF_STR( Hard ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Normal ) )
	PORT_DIPNAME( 0x20, 0x20, "Switch to Start" ) PORT_DIPLOCATION("SW2:6")
	PORT_DIPSETTING(    0x20, "Start" )
	PORT_DIPSETTING(    0x00, "Attack" )
	//"SW2:7" unused
	//"SW2:8" unused
INPUT_PORTS_END

// Rom layout thanks to those unnamed people
ROM_START( aquario )
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "a4.bin",  0x000000, 0x80000, CRC(d2ac7be4) SHA1(dfeb15d6d605bd80ab289daf1e90e4c1e270892b) )
	ROM_LOAD16_BYTE( "a6.bin",  0x000001, 0x80000, CRC(058332a9) SHA1(98beb5dc6eaa8e26e5f137b3564c93baf8174bae) )
	ROM_LOAD16_BYTE( "a5.bin",  0x100000, 0x80000, CRC(1cef8145) SHA1(78a1be8ea0cc0d4e56b2cf9a7c1bd3e08352e175) )
	ROM_LOAD16_BYTE( "a7.bin",  0x100001, 0x80000, CRC(504e4665) SHA1(9b052b48b7cb2da880d6589fdcd1041eca555f7c) )

	ROM_REGION( 0x180000, "tiles", 0 )
	ROM_LOAD( "c1.bin",       0x000000, 0x080000, CRC(93ad1357) SHA1(09b35481798035b5f7d7d533e27418a298c6e2c7) )
	ROM_LOAD( "c2.bin",       0x080000, 0x080000, CRC(4010d14b) SHA1(f9d2e726a032f49fac69a223107966f2884821b5) )
	ROM_LOAD( "c3.bin",       0x100000, 0x080000, CRC(3a3d0285) SHA1(21899b3b2bcb979d53e78b0d48c493a9a15955c7) )

	ROM_REGION16_BE( 0x800000, "sprites", ROMREGION_ERASEFF )
	ROM_LOAD16_BYTE( "a10.bin",      0x000000, 0x080000, CRC(b863e533) SHA1(e80fa6a74c43c040fd4b857247aecf03a3de3d87) )
	ROM_LOAD16_BYTE( "c10.bin",      0x000001, 0x080000, CRC(c9ce76f9) SHA1(a096583f5e81f02d6a34802688d201d8d986a84a) )
	ROM_LOAD16_BYTE( "a11.bin",      0x200000, 0x080000, CRC(8b568940) SHA1(19cd028cd43fa07904deb0250564251ba0128c4b) )
	ROM_LOAD16_BYTE( "c11.bin",      0x200001, 0x080000, CRC(06edb7bc) SHA1(e24ec7b52638edaa8debee0aca40ddf902c63334) )
	ROM_LOAD16_BYTE( "a12.bin",      0x400000, 0x080000, CRC(0219923f) SHA1(1e52df5ef155f5a4d74eabea22bb431a569e344f) )
	ROM_LOAD16_BYTE( "c12.bin",      0x400001, 0x080000, CRC(0bb79c56) SHA1(fdaa6cc9efb3104b78392530547bd82c21cff825) )
	ROM_LOAD16_BYTE( "a13.bin",      0x600000, 0x080000, CRC(9ea5c73d) SHA1(e42002cc13548a8aba6ffb0c60470b345b88eaa8) )
	ROM_LOAD16_BYTE( "c13.bin",      0x600001, 0x080000, CRC(0beef46e) SHA1(eccba6d4e015e93f5ca25ef6df31a491193d08a4) )

	ROM_REGION( 0x210000, "soundcpu", ROMREGION_ERASE00 ) // no sound with this dump
	ROM_FILL(0,1,0xc3) // stop log filling up
ROM_END

GAME( 2021, aquario, 0, system18, aquario, segas18_state, init_generic_5987, ROT0,  "ININ / Westone", "Clockwork Aquario", MACHINE_NO_SOUND )

