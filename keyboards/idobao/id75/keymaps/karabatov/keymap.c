#include QMK_KEYBOARD_H

// Layers
#define _LBASE 0
#define _LSYMB 1
#define _LGAME 2
#define _LARRW 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_LBASE] = LAYOUT_ortho_5x15(
		KC_GRV, 			KC_1, 		KC_2, 		KC_3, 		KC_4, 				KC_5, 		KC_VOLD, 	KC_MUTE, 	KC_VOLU, 	KC_6, 		KC_7, 				KC_8, 			KC_9, 			KC_0, 		KC_DEL, 
		KC_TAB, 			KC_Q, 		KC_W, 		KC_E, 		KC_R, 				KC_T, 		KC_MPRV, 	KC_MPLY, 	KC_MNXT, 	KC_Y, 		KC_U, 				KC_I,			KC_O, 			KC_P, 		KC_BSPC, 
		LCTL_T(KC_ESC), 	KC_A, 		KC_S, 		KC_D, 		KC_F, 				KC_G, 		XXXXXXX, 	XXXXXXX, 	KC_F15, 	KC_H, 		KC_J, 				KC_K, 			KC_L, 			KC_SCLN, 	RCTL_T(KC_QUOT), 
		KC_LSFT, 			KC_Z, 		KC_X, 		KC_C, 		KC_V, 				KC_B, 		XXXXXXX, 	XXXXXXX, 	KC_F14, 	KC_N, 		KC_M, 				KC_COMM, 		KC_DOT, 		KC_SLSH, 	SC_SENT, 
		SGUI_T(KC_MUTE), 	KC_LCTL, 	KC_LALT, 	KC_LGUI, 	LT(_LGAME,KC_SPC), 	KC_SPC, 	KC_SPC, 	XXXXXXX, 	KC_SPC, 	KC_SPC, 	LT(_LSYMB,KC_SPC), 	RCTL(KC_RSFT), 	RCTL(KC_RALT), 	KC_RALT, 	LT(_LARRW,KC_DOWN)
	),
	[_LSYMB] = LAYOUT_ortho_5x15(
		_______, 			_______, 	_______, 	_______, 	_______, 			_______, 	_______, 	_______, 	_______, 	_______, 	_______, 			_______, 		_______, 		_______, 	_______, 
		KC_TILD, 			KC_EXLM, 	KC_AT, 		KC_HASH, 	KC_DLR, 			KC_PERC, 	_______, 	_______, 	_______, 	KC_CIRC, 	KC_AMPR, 			KC_ASTR, 		KC_LPRN, 		KC_RPRN, 	KC_UNDS, 
		_______, 			KC_UNDS, 	KC_LPRN, 	KC_LBRC, 	KC_LCBR, 			KC_EQL, 	_______, 	_______, 	_______, 	KC_PLUS, 	KC_RCBR, 			KC_RBRC, 		KC_RPRN, 		KC_COLN, 	KC_DQUO, 
		_______, 			_______, 	KC_BSLS, 	KC_PIPE, 	KC_GRV, 			_______, 	_______, 	_______, 	_______, 	KC_INS, 	KC_MINS, 			KC_LT, 			KC_GT, 			_______, 	_______, 
		_______, 			_______, 	_______, 	_______, 	_______, 			_______, 	_______, 	_______, 	_______, 	_______, 	_______, 			KC_HOME, 		KC_PGUP, 		KC_PGDN, 	KC_END
	),
	[_LGAME] = LAYOUT_ortho_5x15(
		_______, 			KC_F1, 		KC_F2, 		KC_F3, 		KC_F4, 				KC_F5, 		KC_F6, 		KC_F7, 		KC_F8, 		KC_F9, 		KC_F10, 			KC_F11, 		KC_F12, 		KC_PSCR, 	KC_SCRL, 
		_______, 			_______, 	KC_WH_U, 	KC_MS_U, 	KC_WH_D, 			_______, 	_______, 	_______, 	_______, 	_______, 	_______, 			_______, 		_______, 		_______, 	QK_BOOT, 
		_______, 			_______, 	KC_MS_L, 	KC_MS_D, 	KC_MS_R, 			_______, 	_______, 	_______, 	_______, 	RGB_TOG, 	RGB_MOD, 			RGB_HUI, 		RGB_SAI, 		RGB_VAI, 	RGB_SPI, 
		_______, 			_______, 	_______, 	KC_BTN2, 	KC_BTN1, 			_______, 	_______, 	_______, 	_______, 	_______, 	RGB_RMOD, 			RGB_HUD, 		RGB_SAD, 		RGB_VAD, 	RGB_SPD, 
		_______, 			_______, 	_______, 	_______, 	_______, 			_______, 	_______, 	_______, 	_______, 	_______, 	_______, 			_______, 		_______, 		_______, 	_______
	),
	[_LARRW] = LAYOUT_ortho_5x15(
		XXXXXXX, 			XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 			XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 			XXXXXXX, 		XXXXXXX, 		XXXXXXX, 	XXXXXXX, 
		_______, 			XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 			XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 			XXXXXXX, 		XXXXXXX, 		XXXXXXX, 	XXXXXXX, 
		_______, 			XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 			XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 			XXXXXXX, 		XXXXXXX, 		XXXXXXX, 	XXXXXXX, 
		_______, 			XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 			XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 			XXXXXXX, 		KC_UP, 			XXXXXXX, 	XXXXXXX, 
		_______, 			_______, 	_______, 	_______, 	XXXXXXX, 			XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 			KC_LEFT, 		KC_DOWN, 		KC_RGHT, 	XXXXXXX
	)
};

