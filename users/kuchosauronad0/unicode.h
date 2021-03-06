#pragma once

#include "quantum.h"

void send_unicode_hex_string(const char* str);

/* use X(n) to call the  */
#ifdef UNICODEMAP_ENABLE
enum unicode_name {
OKOK,     // 
BANG,     // â―
IRONY,    // âļŪ
DEGREE,   // Â°
THINK,    // ðĪ 
GRIN,     // ïŋ―
MONOCL,   // ð§
DRUG0,    // ðĪŠ
DRUG1,    // ðĨī 
CLOWN,    // ðĪĄ
MNDBLWN,  // ðĪŊ
MONEY,    // ðĪ
SHTUP,    // ðĪ
PARTY,    // ðĨģ
SMRK,     // ð
WEARY,    // ðĐ
UNAMU,    // ð
SPY,      // ðĩ
DAFUQ,    // ðš
FIST0,    // ðĪ
FIST1,    // ðĪ
FIST2,    // â
FIST3,    // ð
WIFIHAND, // ð
EFFU,     // ð
SPOCK,    // ð
INUP,     // ð
THDN,     // ð
THUP,     // ð
TUMBLER,  // ðĨ
DRAGON0,  // ð
DRAGON1,  // ð
TIGER0,   // ð
TIGER1,   // ðŊ
COOL,     // ð
UCHART,   // ð
DCHART,   // ð
BCHART,   // ð
NOPRCY,   // ðē
PRCY,     // ðą
BBB,      // ðą
POO,      // ðĐ
HUNDR,    // ðŊ
EGGPL,    // ð
WATER,    // ðĶ
LIT,      // ðĨ
SNEK,     // ð
PENGUIN,  // ð§
BOAR,     // ð
MONKEY,   // ð
CHICK,    // ðĨ
DASH,     // ðĻ
DIZZY,    // ðŦ
KEEB,     // ðŪ
HOLE,     // ðģ
SAUCER    // ðļ
};
#endif
