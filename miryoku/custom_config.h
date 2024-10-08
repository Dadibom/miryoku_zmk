#if defined (MIRYOKU_KEYBOARD_CORNE)
#define XXX &none

#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define MIRYOKU_TAP_QWERTY

#define MIRYOKU_LAYERMAPPING_TAP( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp C_PLAY_PAUSE \
&kp LALT  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
&kp LSHFT  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &to U_BASE \
               &kp LCTRL  &kp SPACE  &kp TAB       K35  K36  K37

#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp LC(V)  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp C_PLAY_PAUSE \
&kp LC(C)  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
&to U_TAP  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYERMAPPING_MOUSE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  &kp LANG_HIRAGANA       K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  &kp INT_MUHENKAN       K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  &kp INT_HENKAN       K25  K26  K27  K28  K29  XXX  \
               &kp LCTRL  &kp SPACE  &kp TAB       K35  K36  K37

#endif
