#define MIRYOKU_LAYER_NAV \
&kp PG_UP,         &kp HOME,          &kp UP,            &kp END,           &kp INS,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp PG_DN,         &kp LEFT,          &kp DOWN,          &kp RIGHT,         &u_caps_word,      U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_NAV,       &u_to_U_NUM,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,           &kp SPACE,          &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp PSCRN,         &kp F7,            &kp F8,            &kp F9,            &kp F12,           \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp SLCK,          &kp F4,            &kp F5,            &kp F6,            &kp F11,           \
U_NA,              &kp RALT,          &u_to_U_MEDIA,     &u_to_U_FUN,       U_NA,              &kp PAUSE_BREAK,   &kp F1,            &kp F2,            &kp F3,            &kp F10,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,         &kp DEL,         U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
U_RGB_HUI,         &kp C_BRIGHTNESS_DEC,         &kp C_VOL_UP,      &kp C_BRIGHTNESS_INC,         U_RGB_TOG,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_RGB_EFF,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        U_EP_TOG,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &u_to_U_MEDIA,     &u_to_U_FUN,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, ESC),  U_LT(U_NUM, SPACE), U_LT(U_SYM, TAB),  U_LT(U_MOUSE, RET),U_LT(U_NAV, BSPC),U_LT(U_MEDIA, DEL),U_NP,              U_NP


#if !defined (MIRYOKU_LAYOUTMAPPING_CORNE)
#define XXX &none
#define  MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp MINUS  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp PIPE \
&kp ESC  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp EQUAL \
&kp PLUS  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp UNDER \
               K32  K33  K34       K35  K36  K37
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40
#endif

// #if !defined (MIRYOKU_LAYOUTMAPPING_MINIDOX)
// #define MIRYOKU_LAYOUTMAPPING_MINIDOX( \
// K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
// K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
// K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
// N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// K00  K01  K02  K03  K04       K05  K06  K07  K08  K09 \
// K10  K11  K12  K13  K14       K15  K16  K17  K18  K19 \
// K20  K21  K22  K23  K24       K25  K26  K27  K28  K29 \
//           K32  K33  K34       K35  K36  K37

// #define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 1 2
// #define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 2 3
// #define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 6 7
// #define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 7 8

// #define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 21 22
// #define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 22 23
// #define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 26 27
// #define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 27 28

// #define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 31 32
// #define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 33 34
// #endif
// #if !defined (MIRYOKU_LAYOUTMAPPING_CHOCV)
// #define MIRYOKU_LAYOUTMAPPING_CHOCV( \
// K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
// K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
// K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
// N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
// ) \
// K00  K01  K02  K03  K04       K05  K06  K07  K08  K09 \
// K10  K11  K12  K13  K14       K15  K16  K17  K18  K19 \
// K20  K21  K22  K23  K24       K25  K26  K27  K28  K29 \
//           K32  K33  K34       K35  K36  K37

// #define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 1 2
// #define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 2 3
// #define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 6 7
// #define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 7 8

// #define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 21 22
// #define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 22 23
// #define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 26 27
// #define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 27 28

// #define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 31 32
// #define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 33 34
// #endif


#define MIRYOKU_KLUDGE_THUMBCOMBOS
#define MIRYOKU_KLUDGE_SOFT_OFF
#define MIRYOKU_CLIPBOARD_WIN
#define MIRYOKU_EXTRA_QWERTY
#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_LAYERS_FLIP
#define MIRYOKU_KLUDGE_MOUSEKEYSPR
