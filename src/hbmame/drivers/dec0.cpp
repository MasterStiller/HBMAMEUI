// license:BSD-3-Clause
// copyright-holders:Robbbert
#include "../mame/drivers/dec0.cpp"

ROM_START( baddudef )
	ROM_REGION( 0x60000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "baddudef.4",   0x00000, 0x10000, CRC(1a0667ae) SHA1(a530bfe91aa8b489ef7c1368b81983e760d0d993) )
	ROM_LOAD16_BYTE( "baddudef.1",   0x00001, 0x10000, CRC(14d71614) SHA1(282fe93c04791e48a963ee78e69753e54c51e779) )
	ROM_LOAD16_BYTE( "ei06.6c",   0x40000, 0x10000, CRC(3ff8da57) SHA1(eea8125a3eac33d76d22e72b69633eaae138efe5) )
	ROM_LOAD16_BYTE( "ei03.6a",   0x40001, 0x10000, CRC(f8f2bd94) SHA1(622c66fea00cabb2cce16bf621b07d38a660708d) )

	ROM_REGION( 0x10000, "audiocpu", 0 )
	ROM_LOAD( "ei07.8a",   0x8000, 0x8000, CRC(9fb1ef4b) SHA1(f4dd0773be93c2ad8b0faacd12939c531b5aa130) )

	ROM_REGION( 0x10000, "gfx1", 0 )
	ROM_LOAD( "ei25.15h",  0x00000, 0x08000, CRC(bcf59a69) SHA1(486727e19c12ea55b47e2ef773d0d0471cf50083) )
	ROM_LOAD( "baddudef.26",  0x08000, 0x08000, CRC(bb8d93d0) SHA1(64a462c86cf270b3aa3e359b0f423a816e9dafb6) )

	ROM_REGION( 0x40000, "gfx2", 0 )
	ROM_LOAD( "ei18.14d",  0x00000, 0x10000, CRC(05cfc3e5) SHA1(a0163921c77dc9706463a402c3dd45ec4341cd21) )
	ROM_LOAD( "ei20.17d",  0x10000, 0x10000, CRC(e11e988f) SHA1(0c59f0d8d1abe414c7e1ebd49d454179fed2cd00) )
	ROM_LOAD( "ei22.14f",  0x20000, 0x10000, CRC(b893d880) SHA1(99e228174677f2e3e96154f77bfa9bf0f1c0a6a5) )
	ROM_LOAD( "ei24.17f",  0x30000, 0x10000, CRC(6f226dda) SHA1(65ebb16a292c57d49c135fce7ed7537146226eb5) )

	ROM_REGION( 0x20000, "gfx3", 0 )
	ROM_LOAD( "ei30.9h",   0x08000, 0x08000, CRC(982da0d1) SHA1(d819a587905624d793988f2ea726783da527d9f2) )
	ROM_CONTINUE(          0x00000, 0x08000 )
	ROM_LOAD( "ei28.9f",   0x18000, 0x08000, CRC(f01ebb3b) SHA1(1686690cb0c87d9e687b2abb4896cf285ab8378f) )
	ROM_CONTINUE(          0x10000, 0x08000 )

	ROM_REGION( 0x80000, "gfx4", 0 )
	ROM_LOAD( "ei15.16c",  0x00000, 0x10000, CRC(a38a7d30) SHA1(5cb1fb97605829fc733c79a7e169fa52adc6863b) )
	ROM_LOAD( "ei16.17c",  0x10000, 0x08000, CRC(17e42633) SHA1(405f5296a741901677cca978a1b287d894eb1e54) )
	ROM_LOAD( "ei11.16a",  0x20000, 0x10000, CRC(3a77326c) SHA1(4de81752329cde6210a9c250a9f8ebe3dad9fe92) )
	ROM_LOAD( "ei12.17a",  0x30000, 0x08000, CRC(fea2a134) SHA1(525dd5f48993db1fe1e3c095442884178f75e8e0) )
	ROM_LOAD( "ei13.13c",  0x40000, 0x10000, CRC(e5ae2751) SHA1(4e4a3c68b11e9b0c8da70121b23296128063d4e9) )
	ROM_LOAD( "ei14.14c",  0x50000, 0x08000, CRC(e83c760a) SHA1(d08db381658b8b3288c5eaa9048a906126e0f712) )
	ROM_LOAD( "ei09.13a",  0x60000, 0x10000, CRC(6901e628) SHA1(1162c8cee20450780774cad54a9af40ebf0f0826) )
	ROM_LOAD( "ei10.14a",  0x70000, 0x08000, CRC(eeee8a1a) SHA1(2bf8378ff38f6a7c7cbd4cbd489de25cb1f0fe71) )

	ROM_REGION( 0x40000, "oki", 0 )
	ROM_LOAD( "ei08.2c",   0x0000, 0x10000, CRC(3c87463e) SHA1(f17c98507b562e91e9b27599614b3249fe68ff7a) )

	ROM_REGION( 0x1000, "mcu", 0 )
	ROM_LOAD( "ei31.9a",   0x0000, 0x1000, CRC(2a8745d2) SHA1(f15ab17b1e7836d603135f5c66ca2e3d72f6e4a2) )
ROM_END

// There are 3 screens. Press 1 very lightly to advance.
// On first screen, press Left & Right to move 'CHAOS' around.
ROM_START( decodemo )
	ROM_REGION( 0x60000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "decodemo.4",   0x00000, 0x10000, CRC(7cb53ab2) SHA1(c06f8173f5b27b647b186e1c3a198ec22dab4950) )
	ROM_LOAD16_BYTE( "decodemo.1",   0x00001, 0x10000, CRC(920dd0bf) SHA1(e69e60121812716b55f4e9c4b3f4993171c5296a) )
	ROM_LOAD16_BYTE( "decodemo.6",   0x40000, 0x10000, CRC(d7978eeb) SHA1(1adc95bebe9eea8c112d40cd04ab7a8d75c4f961) )
	ROM_LOAD16_BYTE( "decodemo.3",   0x40001, 0x10000, CRC(d7978eeb) SHA1(1adc95bebe9eea8c112d40cd04ab7a8d75c4f961) )

	// The instruction [33C0 0030 C003] [move.w D0, $30C003.l] is considered illegal, we need to patch out all 3 occurrences
	ROM_FILL( 0x04ba, 1, 0x4e )
	ROM_FILL( 0x04bb, 1, 0x71 ) /* write a nop instruction [4e71] */
	ROM_COPY( "maincpu", 0x04ba, 0x04bc, 2 ) /* The faulty instruction is 6 bytes long, so we need 3 nops */
	ROM_COPY( "maincpu", 0x04ba, 0x04be, 2 )
	ROM_COPY( "maincpu", 0x04ba, 0x04e8, 6 ) /* copy the 3 nops to 0x4e8 */
	ROM_COPY( "maincpu", 0x04ba, 0x096e, 6 ) /* and 0x96e */

	// pf_control_0 was not being set. This sends 3 to 240000, and 0 to the rest.
	ROM_FILL(0x1000, 0x80, 0)
	ROM_FILL(0x1000, 1, 0x33)
	ROM_FILL(0x1001, 1, 0xfc)
	ROM_FILL(0x1003, 1, 0x03)
	ROM_FILL(0x1005, 1, 0x24)
	ROM_COPY( "maincpu", 0x1000, 0x1008, 0x08 )
	ROM_FILL(0x100b, 1, 0x00)
	ROM_FILL(0x100f, 1, 0x02)
	ROM_COPY( "maincpu", 0x1008, 0x1010, 0x08 )
	ROM_FILL(0x1017, 1, 0x04)
	ROM_COPY( "maincpu", 0x1008, 0x1018, 0x08 )
	ROM_FILL(0x101f, 1, 0x06)
	ROM_COPY( "maincpu", 0x1000, 0x1020, 0x20 )
	ROM_FILL(0x1023, 1, 0x00)
	ROM_FILL(0x1026, 1, 0x60)
	ROM_FILL(0x102e, 1, 0x60)
	ROM_FILL(0x1036, 1, 0x60)
	ROM_FILL(0x103e, 1, 0x60)
	ROM_COPY( "maincpu", 0x1000, 0x1040, 0x20 )
	ROM_FILL(0x1043, 1, 0x00)
	ROM_FILL(0x1046, 1, 0xc0)
	ROM_FILL(0x104e, 1, 0xc0)
	ROM_FILL(0x1056, 1, 0xc0)
	ROM_FILL(0x105e, 1, 0xc0)
	ROM_FILL(0x1060, 1, 0x4e)
	ROM_FILL(0x1061, 1, 0xf9)
	ROM_FILL(0x1064, 1, 0x04)
	ROM_FILL(0x1065, 1, 0x2e)
	ROM_FILL(0x0006, 1, 0x10)
	ROM_FILL(0x0007, 1, 0x00)

	ROM_REGION( 0x10000, "audiocpu", 0 )
	ROM_LOAD( "ei07.8a",   0x8000, 0x8000, CRC(9fb1ef4b) SHA1(f4dd0773be93c2ad8b0faacd12939c531b5aa130) )

	ROM_REGION( 0x10000, "gfx1", 0 )
	ROM_LOAD( "decodemo.25",  0x00000, 0x08000, CRC(011ffca6) SHA1(5188431849b4613152fd7bdba6a3ff0a4fd6424b) )
	ROM_LOAD( "decodemo.26",  0x08000, 0x08000, CRC(14b56f44) SHA1(66c294b27400d3f3cafd7b1f633681df7195a14b) )

	ROM_REGION( 0x40000, "gfx2", 0 )
	ROM_LOAD( "decodemo.18",  0x00000, 0x10000, CRC(53ac4058) SHA1(b6bd668085a6f2c21c66f38955e27ab384a5ebf1) )
	ROM_LOAD( "decodemo.20",  0x10000, 0x10000, CRC(64f1ca83) SHA1(a8922226dc4f67873c0eb32a0da5e920b9e08e49) )
	ROM_LOAD( "decodemo.22",  0x20000, 0x10000, CRC(e93c5aef) SHA1(bd31b2418a3e3c76c0018d43e9b106895218dae7) )
	ROM_LOAD( "decodemo.24",  0x30000, 0x10000, CRC(ae2556dc) SHA1(ffcc1f7e8ec25ba35d20cedb6cb4010ea9ff409d) )

	ROM_REGION( 0x20000, "gfx3", 0 )
	ROM_LOAD( "decodemo.30",  0x08000, 0x08000, CRC(9b02b8f8) SHA1(665764ac534ad370545f33d210846e69db558f6f) )
	ROM_CONTINUE(             0x00000, 0x08000 )
	ROM_LOAD( "decodemo.28",  0x18000, 0x08000, CRC(596b92f2) SHA1(a15f4435a3dcfa7d6a45610fccb8607ae9b8fa19) )
	ROM_CONTINUE(             0x10000, 0x08000 )

	ROM_REGION( 0x80000, "gfx4", ROMREGION_ERASE00 )
	ROM_LOAD( "decodemo.15",  0x00000, 0x10000, CRC(4a051829) SHA1(ed560a3ffb9b1d83c3291145e0e938016dd1fa5a) )
	ROM_LOAD( "decodemo.11",  0x20000, 0x10000, CRC(d7978eeb) SHA1(1adc95bebe9eea8c112d40cd04ab7a8d75c4f961) )
	ROM_LOAD( "decodemo.13",  0x40000, 0x10000, CRC(a58d1d9e) SHA1(ebd22872e0230da23d0e63ef7fbe2b5988cd93bd) )
	ROM_LOAD( "decodemo.9",   0x60000, 0x10000, CRC(4d1de58f) SHA1(1979fb6d9cdc25033c75fd3f0c30fb56e040ddc0) )

	ROM_REGION( 0x40000, "oki", 0 )
	ROM_LOAD( "ei08.2c",   0x0000, 0x10000, CRC(3c87463e) SHA1(f17c98507b562e91e9b27599614b3249fe68ff7a) )

	ROM_REGION( 0x1000, "mcu", 0 )
	ROM_LOAD( "ei31.9a",   0x0000, 0x1000, CRC(2a8745d2) SHA1(f15ab17b1e7836d603135f5c66ca2e3d72f6e4a2) )
ROM_END


/********
 Robocop
*********/

ROM_START( robocopb01 )
	ROM_REGION( 0x60000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "robop_05.rom", 0x00000, 0x10000, CRC(bcef3e9b) SHA1(0ca099ea7428f877036e6e2a6daddfd9145ed9bb) )
	ROM_LOAD16_BYTE( "robop_01.rom", 0x00001, 0x10000, CRC(c9803685) SHA1(13b3b0ebee24b4453685616e9a204b4ca6fb0053) )
	ROM_LOAD16_BYTE( "robop_04.rom", 0x20000, 0x10000, CRC(9d7b79e0) SHA1(e0d901b9b3cd62f7c947da04f7447ebfa88bf44a) )
	ROM_LOAD16_BYTE( "robop_00_s01.rom", 0x20001, 0x10000, CRC(631301c1) SHA1(c4288e6be0ca6e5ae4c93dca2fe5816522b9c309) )

	ROM_REGION( 0x10000, "audiocpu", 0 )
	ROM_LOAD( "ep03-3", 0x08000, 0x08000, CRC(5b164b24) SHA1(b217a2ac8b26aebd208631a13030487ed27d232e) )

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "ep23", 0x00000, 0x10000, CRC(a77e4ab1) SHA1(d06cc847192b6c7f642e4ff7128e298d0aa034b2) )
	ROM_LOAD( "ep22", 0x10000, 0x10000, CRC(9fbd6903) SHA1(9ac6ac8a18c23e915e8ae3782867d10c0bd65778) )

	ROM_REGION( 0x40000, "gfx2", 0 )
	ROM_LOAD( "ep20", 0x00000, 0x10000, CRC(1d8d38b8) SHA1(9add6349f8a578fb86b678cef921d6ec0cfccdad) )
	ROM_LOAD( "ep21", 0x10000, 0x10000, CRC(187929b2) SHA1(deca1f0a52584769caee1d2302617aa957c56a71) )
	ROM_LOAD( "ep18", 0x20000, 0x10000, CRC(b6580b5e) SHA1(ee216d8db89b8cb7a51a4e19bf6f17788547156b) )
	ROM_LOAD( "ep19", 0x30000, 0x10000, CRC(9bad01c7) SHA1(947c7f9d0facaea13a924274adde0e996be7b999) )

	ROM_REGION( 0x20000, "gfx3", 0 )
	ROM_LOAD( "ep14", 0x00000, 0x08000, CRC(ca56ceda) SHA1(edbaa29fc166cddf071ff5e59cfcfb7eeb127d68) )
	ROM_LOAD( "ep15", 0x08000, 0x08000, CRC(a945269c) SHA1(de0b387e8699298f7682d6d7ca803a209888f7a1) )
	ROM_LOAD( "ep16", 0x10000, 0x08000, CRC(e7fa4d58) SHA1(32e3f649b4f112a4e6be00068473b82c627bc8d1) )
	ROM_LOAD( "ep17", 0x18000, 0x08000, CRC(84aae89d) SHA1(037520bd0f291f862c2211a6f35b2a8a54f10b2a) )

	ROM_REGION( 0x80000, "gfx4", 0 )
	ROM_LOAD( "ep07", 0x00000, 0x10000, CRC(495d75cf) SHA1(0ffe677d53b7675073902e9bd40e4150f2cdfb1a) )
	ROM_LOAD( "ep06", 0x10000, 0x08000, CRC(a2ae32e2) SHA1(4e8182205563da9d50a831c65951645e278b03e6) )
	ROM_LOAD( "ep11", 0x20000, 0x10000, CRC(62fa425a) SHA1(be88c1a6436df8a456c405822e28c472e3e79a69) )
	ROM_LOAD( "ep10", 0x30000, 0x08000, CRC(cce3bd95) SHA1(00bbb197824d970b0e404167ca4ae53e1955ad94) )
	ROM_LOAD( "ep09", 0x40000, 0x10000, CRC(11bed656) SHA1(6a7d984a32982d9aef8ea7d8a720925036e7046e) )
	ROM_LOAD( "ep08", 0x50000, 0x08000, CRC(c45c7b4c) SHA1(70e3e475fe767eefa4cc1d6ca052271a099ff7a8) )
	ROM_LOAD( "ep13", 0x60000, 0x10000, CRC(8fca9f28) SHA1(cac85bf2b66e49e22c33c85bdb5712feef6aae7e) )
	ROM_LOAD( "ep12", 0x70000, 0x08000, CRC(3cd1d0c3) SHA1(ca3546cf51ebb10dfa4e78954f0212e8fcdb3d57) )

	ROM_REGION( 0x40000, "oki", 0 )
	ROM_LOAD( "ep02", 0x00000, 0x10000, CRC(711ce46f) SHA1(939a8545e53776ff2180d2c7e63bc997689c088e) )
ROM_END

/*    YEAR  NAME          PARENT    MACHINE   INPUT     CLASS       INIT         MONITOR COMPANY                 FULLNAME FLAGS */
GAME( 2007, baddudef,     baddudes, baddudes, baddudes, dec0_state, init_hbarrel, ROT0, "Arkatrad", "Bad Dudes vs. Dragonninja (French, 2017-10-29)", MACHINE_SUPPORTS_SAVE )
GAME( 1996, decodemo,     baddudes, baddudes, baddudes, dec0_state, init_hbarrel, ROT0, "Charles Doty", "Demo - Data East", MACHINE_SUPPORTS_SAVE )

// Robocop
GAME( 1988, robocopb01,   robocop,  robocopb, robocop,  dec0_state, empty_init,   ROT0, "bootleg", "Robocop (Red Corporation World bootleg)", MACHINE_SUPPORTS_SAVE )

