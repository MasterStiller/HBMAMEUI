// license:BSD-3-Clause
// copyright-holders:Robbbert
#include "../mame/drivers/segas16b.cpp"

/**************
 Altered Beast
 ***************/
ROM_START( altbeastfr )
	ROM_REGION( 0x040000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "altbeastfr.a7", 0x000000, 0x20000, CRC(309d3a0a) SHA1(646dcafe7ac2831e241eb0643a06f8c32bdba77a) )
	ROM_LOAD16_BYTE( "altbeastfr.a5", 0x000001, 0x20000, CRC(39cd8368) SHA1(6b5890d44b549c3bbe18345ac86943c55f7b9d26) )

	ROM_REGION( 0x60000, "gfx1", 0 )
	ROM_LOAD( "opr-11674.a14", 0x00000, 0x20000, CRC(a57a66d5) SHA1(5103583d48997abad12a0c5fee26431c486ced52) )
	ROM_LOAD( "opr-11675.a15", 0x20000, 0x20000, CRC(2ef2f144) SHA1(38d22d609db2d9b6067b5d12f6499436de4605cb) )
	ROM_LOAD( "opr-11676.a16", 0x40000, 0x20000, CRC(0c04acac) SHA1(87fe2a0dd9913f9550e9b4cbc7e7465b61640e07) )

	ROM_REGION16_BE( 0x100000, "sprites", 0 )
	ROM_LOAD16_BYTE( "epr-11677.b1", 0x00001, 0x20000, CRC(a01425cd) SHA1(72be5ec29e476601f9bf6aaedef9b73cedeb42f0) )
	ROM_LOAD16_BYTE( "epr-11681.b5", 0x00000, 0x20000, CRC(d9e03363) SHA1(995a7c6a8f0c61468b57a3bb407461a2a3ae8adc) )
	ROM_LOAD16_BYTE( "epr-11678.b2", 0x40001, 0x20000, CRC(17a9fc53) SHA1(85a9a605742ae5aab86db37189b9ee4d54c70e56) )
	ROM_LOAD16_BYTE( "epr-11682.b6", 0x40000, 0x20000, CRC(e3f77c5e) SHA1(6b3cb7918ab0c7c97a51cc5ea19ced3374ff3914) )
	ROM_LOAD16_BYTE( "epr-11679.b3", 0x80001, 0x20000, CRC(14dcc245) SHA1(1ca1b6e0f2b7bedad2a8ab70f52da8c54d40d3cf) )
	ROM_LOAD16_BYTE( "epr-11683.b7", 0x80000, 0x20000, CRC(f9a60f06) SHA1(0cffcfdb02733feaa869198b7e668c58b47c321a) )
	ROM_LOAD16_BYTE( "epr-11680.b4", 0xc0001, 0x20000, CRC(f43dcdec) SHA1(2941500cf33afca487f19f2329033d5d17aad826) )
	ROM_LOAD16_BYTE( "epr-11684.b8", 0xc0000, 0x20000, CRC(b20c0edb) SHA1(6c8694d05e3adac37c9015037ab800233371db36) )

	ROM_REGION( 0x50000, "soundcpu", 0 )
	ROM_LOAD( "epr-11671.a10",    0x00000, 0x08000, CRC(2b71343b) SHA1(8a657f787de2b9d5161ed2c109642a148348af09) )
	ROM_LOAD( "opr-11672.a11",    0x10000, 0x20000, CRC(bbd7f460) SHA1(bbc5c2219cb3a827d84062b19affd9780da2a3cf) )
	ROM_LOAD( "opr-11673.a12",    0x30000, 0x20000, CRC(400c4a36) SHA1(de4bdfa91734410e0a7f6a16bf8336db172f458a) )

	ROM_REGION( 0x1000, "mcu", 0 )
	ROM_LOAD( "317-0078.c2", 0x00000, 0x1000, CRC(8101925f) SHA1(a45d772ebe2fd1a577a6ccac8c6c76bb622258bb) )
ROM_END

ROM_START( altbeasts01 )
	ROM_REGION( 0x040000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "altbeasts01.a7", 0x000000, 0x20000, CRC(68d05ff9) SHA1(0365851ae5e84f1cf886ee9b6db57434e992587b) )
	ROM_LOAD16_BYTE( "altbeasts01.a5", 0x000001, 0x20000, CRC(b46d3b87) SHA1(04e69ecc0185e5df4c2d26acaea666d8c202aa76) )

	ROM_REGION( 0x60000, "gfx1", 0 )
	ROM_LOAD( "opr-11674.a14", 0x00000, 0x20000, CRC(a57a66d5) SHA1(5103583d48997abad12a0c5fee26431c486ced52) )
	ROM_LOAD( "opr-11675.a15", 0x20000, 0x20000, CRC(2ef2f144) SHA1(38d22d609db2d9b6067b5d12f6499436de4605cb) )
	ROM_LOAD( "opr-11676.a16", 0x40000, 0x20000, CRC(0c04acac) SHA1(87fe2a0dd9913f9550e9b4cbc7e7465b61640e07) )

	ROM_REGION16_BE( 0x100000, "sprites", 0 )
	ROM_LOAD16_BYTE( "epr-11677.b1", 0x00001, 0x20000, CRC(a01425cd) SHA1(72be5ec29e476601f9bf6aaedef9b73cedeb42f0) )
	ROM_LOAD16_BYTE( "epr-11681.b5", 0x00000, 0x20000, CRC(d9e03363) SHA1(995a7c6a8f0c61468b57a3bb407461a2a3ae8adc) )
	ROM_LOAD16_BYTE( "epr-11678.b2", 0x40001, 0x20000, CRC(17a9fc53) SHA1(85a9a605742ae5aab86db37189b9ee4d54c70e56) )
	ROM_LOAD16_BYTE( "epr-11682.b6", 0x40000, 0x20000, CRC(e3f77c5e) SHA1(6b3cb7918ab0c7c97a51cc5ea19ced3374ff3914) )
	ROM_LOAD16_BYTE( "epr-11679.b3", 0x80001, 0x20000, CRC(14dcc245) SHA1(1ca1b6e0f2b7bedad2a8ab70f52da8c54d40d3cf) )
	ROM_LOAD16_BYTE( "epr-11683.b7", 0x80000, 0x20000, CRC(f9a60f06) SHA1(0cffcfdb02733feaa869198b7e668c58b47c321a) )
	ROM_LOAD16_BYTE( "epr-11680.b4", 0xc0001, 0x20000, CRC(f43dcdec) SHA1(2941500cf33afca487f19f2329033d5d17aad826) )
	ROM_LOAD16_BYTE( "epr-11684.b8", 0xc0000, 0x20000, CRC(b20c0edb) SHA1(6c8694d05e3adac37c9015037ab800233371db36) )

	ROM_REGION( 0x50000, "soundcpu", 0 )
	ROM_LOAD( "epr-11671.a10",    0x00000, 0x08000, CRC(2b71343b) SHA1(8a657f787de2b9d5161ed2c109642a148348af09) )
	ROM_LOAD( "opr-11672.a11",    0x10000, 0x20000, CRC(bbd7f460) SHA1(bbc5c2219cb3a827d84062b19affd9780da2a3cf) )
	ROM_LOAD( "opr-11673.a12",    0x30000, 0x20000, CRC(400c4a36) SHA1(de4bdfa91734410e0a7f6a16bf8336db172f458a) )

	ROM_REGION( 0x1000, "mcu", 0 )
	ROM_LOAD( "317-0078.c2", 0x00000, 0x1000, CRC(8101925f) SHA1(a45d772ebe2fd1a577a6ccac8c6c76bb622258bb) )
ROM_END

ROM_START( altbeasts02 )
	ROM_REGION( 0x040000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "epr-11907_ps02.a7", 0x000000, 0x20000, CRC(a9ba790b) SHA1(3df2fef74fbc1d766dea568b94f17bee091bf9dc) )
	ROM_LOAD16_BYTE( "epr-11906_ps02.a5", 0x000001, 0x20000, CRC(8162cd10) SHA1(1d4ea99a5346aac2b4ca80e434154b600db2632b) )

	ROM_REGION( 0x60000, "gfx1", 0 )
	ROM_LOAD( "opr-11674.a14", 0x00000, 0x20000, CRC(a57a66d5) SHA1(5103583d48997abad12a0c5fee26431c486ced52) )
	ROM_LOAD( "opr-11675.a15", 0x20000, 0x20000, CRC(2ef2f144) SHA1(38d22d609db2d9b6067b5d12f6499436de4605cb) )
	ROM_LOAD( "opr-11676.a16", 0x40000, 0x20000, CRC(0c04acac) SHA1(87fe2a0dd9913f9550e9b4cbc7e7465b61640e07) )

	ROM_REGION16_BE( 0x100000, "sprites", 0 )
	ROM_LOAD16_BYTE( "epr-11677.b1", 0x00001, 0x20000, CRC(a01425cd) SHA1(72be5ec29e476601f9bf6aaedef9b73cedeb42f0) )
	ROM_LOAD16_BYTE( "epr-11681.b5", 0x00000, 0x20000, CRC(d9e03363) SHA1(995a7c6a8f0c61468b57a3bb407461a2a3ae8adc) )
	ROM_LOAD16_BYTE( "epr-11678.b2", 0x40001, 0x20000, CRC(17a9fc53) SHA1(85a9a605742ae5aab86db37189b9ee4d54c70e56) )
	ROM_LOAD16_BYTE( "epr-11682.b6", 0x40000, 0x20000, CRC(e3f77c5e) SHA1(6b3cb7918ab0c7c97a51cc5ea19ced3374ff3914) )
	ROM_LOAD16_BYTE( "epr-11679.b3", 0x80001, 0x20000, CRC(14dcc245) SHA1(1ca1b6e0f2b7bedad2a8ab70f52da8c54d40d3cf) )
	ROM_LOAD16_BYTE( "epr-11683.b7", 0x80000, 0x20000, CRC(f9a60f06) SHA1(0cffcfdb02733feaa869198b7e668c58b47c321a) )
	ROM_LOAD16_BYTE( "epr-11680.b4", 0xc0001, 0x20000, CRC(f43dcdec) SHA1(2941500cf33afca487f19f2329033d5d17aad826) )
	ROM_LOAD16_BYTE( "epr-11684.b8", 0xc0000, 0x20000, CRC(b20c0edb) SHA1(6c8694d05e3adac37c9015037ab800233371db36) )

	ROM_REGION( 0x50000, "soundcpu", 0 )
	ROM_LOAD( "epr-11671.a10",    0x00000, 0x08000, CRC(2b71343b) SHA1(8a657f787de2b9d5161ed2c109642a148348af09) )
	ROM_LOAD( "opr-11672.a11",    0x10000, 0x20000, CRC(bbd7f460) SHA1(bbc5c2219cb3a827d84062b19affd9780da2a3cf) )
	ROM_LOAD( "opr-11673.a12",    0x30000, 0x20000, CRC(400c4a36) SHA1(de4bdfa91734410e0a7f6a16bf8336db172f458a) )

	ROM_REGION( 0x1000, "mcu", 0 )
	ROM_LOAD( "317-0078.c2", 0x00000, 0x1000, CRC(8101925f) SHA1(a45d772ebe2fd1a577a6ccac8c6c76bb622258bb) )
ROM_END

ROM_START( altbeasts03 )
	ROM_REGION( 0x40000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "epr-11742_ps03.a7", 0x000000, 0x20000, CRC(bcee1d8c) SHA1(10f75f3dd4a61a0684117080269746a9c492f5f4) )
	ROM_LOAD16_BYTE( "epr-11741_ps03.a5", 0x000001, 0x20000, CRC(23c51a76) SHA1(c1a8cfc8e939b03badd3a93ef0fa180a23884ecd) )

	ROM_REGION( 0x2000, "maincpu:key", 0 )
	ROM_LOAD( "317-0069.key", 0x0000, 0x2000, CRC(959e256a) SHA1(392832620ddbe549b3a807ef226dadbf861a16ee) )

	ROM_REGION( 0xc0000, "gfx1", 0 )
	ROM_LOAD( "epr-11722.a14", 0x00000, 0x10000,  CRC(adaa8db5) SHA1(3262c98d13d08c333d16052cac841f44d2f99743) )
	ROM_LOAD( "epr-11736.b14", 0x20000, 0x10000,  CRC(e9ad5e89) SHA1(769628eee6e194a84aa8a3729f4e7d07dd3ba25c) )
	ROM_LOAD( "epr-11723.a15", 0x40000, 0x10000,  CRC(131a3f9a) SHA1(8182c3b8ce7a2f02b226cfa2081187593c9d0d0b) )
	ROM_LOAD( "epr-11737.b15", 0x60000, 0x10000,  CRC(2e420023) SHA1(3aa2c3b6fccafb4d53b6ab99b95181d3eed7c77f) )
	ROM_LOAD( "epr-11724.a16", 0x80000, 0x10000,  CRC(6f2ed50a) SHA1(55d0c4299e7240b0ef5316b48db7a158145c76ab) )
	ROM_LOAD( "epr-11738.b16", 0xa0000, 0x10000,  CRC(de3d6d02) SHA1(428811f21c68761022521a17fc4716f6e7214b20) )

	ROM_REGION16_BE( 0x200000, "sprites", 0 )
	ROM_LOAD16_BYTE( "epr-11725.b1",  0x000001, 0x010000, CRC(f8b3684e) SHA1(3de2685cae5fb3c954b8440fafce313072747469) )
	ROM_LOAD16_BYTE( "epr-11729.b5",  0x000000, 0x010000, CRC(ae3c2793) SHA1(c4f46861ea63ffa3c038a1ef931479b94e5382df) )
	ROM_LOAD16_BYTE( "epr-11726.b2",  0x040001, 0x010000, CRC(3cce5419) SHA1(fccdbd6d05f5927272e7d6e5f997418d4fa2baf5) )
	ROM_LOAD16_BYTE( "epr-11730.b6",  0x040000, 0x010000, CRC(3af62b55) SHA1(9f079af88aaf2447948c9ac01c6cbd1e79539704) )
	ROM_LOAD16_BYTE( "epr-11727.b3",  0x080001, 0x010000, CRC(b0390078) SHA1(9035d9f45c67bdc802710018722943f5b63e8b5d) )
	ROM_LOAD16_BYTE( "epr-11731.b7",  0x080000, 0x010000, CRC(2a87744a) SHA1(421b3926de046ddeddad05f65fc6b5078af28dbd) )
	ROM_LOAD16_BYTE( "epr-11728.b4",  0x0c0001, 0x010000, CRC(f3a43fd8) SHA1(d42833ecd0c1920f1a6904d32c096f12d8622141) )
	ROM_LOAD16_BYTE( "epr-11732.b8",  0x0c0000, 0x010000, CRC(2fb3e355) SHA1(960e0a66b23f79833b011ea35a5a412dffb47083) )
	ROM_LOAD16_BYTE( "epr-11717.a1",  0x100001, 0x010000, CRC(676be0cb) SHA1(1e7d4c5f231992f111cc7885e97bc5a7267a5e89) )
	ROM_LOAD16_BYTE( "epr-11733.b10", 0x100000, 0x010000, CRC(802cac94) SHA1(24e5aa74ce8b6c53c78cc33a41a473df3fbce639) )
	ROM_LOAD16_BYTE( "epr-11718.a2",  0x140001, 0x010000, CRC(882864c2) SHA1(bd44bbdc13e5fd1b5c31c343da00a75b9dd90478) )
	ROM_LOAD16_BYTE( "epr-11734.b11", 0x140000, 0x010000, CRC(76c704d2) SHA1(35b393071e29b8d122d3f904b923689a7dddc808) )
	ROM_LOAD16_BYTE( "epr-11719.a3",  0x180001, 0x010000, CRC(339987f7) SHA1(b5650f8bdbd44510e84686b20daf70bc4a564f28) )
	ROM_LOAD16_BYTE( "epr-11735.b12", 0x180000, 0x010000, CRC(4fe406aa) SHA1(7f068b81f35be4cc4785824ed524d28f201ff0a5) )

	ROM_REGION( 0x50000, "soundcpu", 0 )
	ROM_LOAD( "epr-11671.a10", 0x00000, 0x08000, CRC(2b71343b) SHA1(8a657f787de2b9d5161ed2c109642a148348af09) )
	ROM_LOAD( "opr-11672.a11", 0x10000, 0x20000, CRC(bbd7f460) SHA1(bbc5c2219cb3a827d84062b19affd9780da2a3cf) )
	ROM_LOAD( "opr-11673.a12", 0x30000, 0x20000, CRC(400c4a36) SHA1(de4bdfa91734410e0a7f6a16bf8336db172f458a) )
ROM_END

/*    YEAR  NAME            PARENT    MACHINE        INPUT       INIT             MONITOR COMPANY                 FULLNAME FLAGS */
// Altered Beast
GAME( 1988, altbeastfr,  altbeast, system16b_i8751, altbeast, segas16b_state, init_generic_5521, ROT0, "S.Arkames", "Altered Beast (French)", 0 )
GAME( 2018, altbeasts01, altbeast, system16b_i8751, altbeast, segas16b_state, init_generic_5521, ROT0, "MamePlus", "Altered Beast (Portuguese)", 0 )
GAME( 2018, altbeasts02, altbeast, system16b_i8751, altbeast, segas16b_state, init_generic_5521, ROT0, "MamePlus", "Altered Beast (Spanish, 2018-08-05)", 0 )
GAME( 2018, altbeasts03, altbeast, system16b_fd1094, altbeast, segas16b_state, init_generic_5521, ROT0, "MamePlus", "Altered Beast (Spanish, 2018-08-07)", 0 )


ROM_START( fantzone01 ) // standard PS2 version - same as fantzoneta except for p roms
	ROM_REGION( 0x80000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "fz1_s16b_p00.a7", 0x00000, 0x20000, CRC(2e131b1d) SHA1(0bb7ba4dd579d4ab92030b0021df81c0a18b91e9) )
	ROM_LOAD16_BYTE( "fz1_s16b_p00.a5", 0x00001, 0x20000, CRC(8c6fe14d) SHA1(b823e505a21dd19eb805f7206c7ef93c6cf51816) )

	ROM_REGION( 0x30000, "gfx1", 0 )
	ROM_LOAD( "fzta__a14.bin", 0x00000, 0x10000, CRC(9468ab33) SHA1(714660b9eafb78ef5d3aed218367b4e5708376f6) )
	ROM_LOAD( "fzta__a15.bin", 0x10000, 0x10000, CRC(22a3cf75) SHA1(6f21bc2a565738b997f898ed6ee631e9452662ca) )
	ROM_LOAD( "fzta__a16.bin", 0x20000, 0x10000, CRC(25cba87f) SHA1(abece2c27cd9d299319fa3ea87e016606426abc2) )

	ROM_REGION16_BE( 0x180000, "sprites", ROMREGION_ERASEFF )
	ROM_LOAD16_BYTE( "fzta__b01.bin",  0x000001, 0x20000, CRC(0beb4a22) SHA1(e35f6d92b88f0730ccf03a090900ca2ed9824e74) )
	ROM_LOAD16_BYTE( "fzta__b05.bin",  0x000000, 0x20000, CRC(7f676c69) SHA1(231e7829b4ddb039f9075aebd1f2a123c79d396d) )
	ROM_LOAD16_BYTE( "fzta__a01.bin",  0x100001, 0x20000, CRC(40e1db9a) SHA1(305cd5e2d8512774638dfa724df6696ffa81ebb2) )
	ROM_LOAD16_BYTE( "fzta__b10.bin",  0x100000, 0x20000, CRC(acbb5cff) SHA1(bd356f664ec1c0e955161aa3afd06f2aeda80357) )

	ROM_REGION( 0x50000, "soundcpu", 0 )
	ROM_LOAD( "fzta__a10.bin", 0x00000, 0x08000, CRC(dab6fcd0) SHA1(151b62c5353533ae8660cbeebd8fe3219adbf4b5) )
ROM_END

GAME( 2008, fantzone01, 0, system16b, fantzoneta, segas16b_state, init_generic_5704,       ROT0,   "bootleg", "Fantasy Zone (PS2)", 0 )

