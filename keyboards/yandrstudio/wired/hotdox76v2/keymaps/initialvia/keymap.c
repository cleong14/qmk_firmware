#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_GRV, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_MINS, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_BSLS, KC_LCTL, KC_LALT, TG(1), TG(2), KC_LGUI, KC_HOME, KC_END, KC_PGUP, KC_SPC, KC_DEL, KC_PGDN, KC_MINS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, KC_LBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, KC_RBRC, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_RGUI, TG(2), TG(1), KC_RALT, KC_RCTL, KC_LEFT, KC_RGHT, KC_UP, KC_DOWN, KC_ENT, KC_SPC),
	[1] = LAYOUT(KC_WAKE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, RESET, KC_TAB, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_AMPR, DEBUG, KC_LCTL, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRV, KC_LSFT, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_TRNS, KC_LCTL, KC_LALT, TG(1), TG(2), KC_LGUI, KC_HOME, KC_END, KC_PGUP, KC_SPC, KC_DEL, KC_PGDN, RESET, KC_F6, KC_F7, KC_F8, KC_F9, KC_F12, KC_EQL, DEBUG, KC_PIPE, KC_7, KC_8, KC_9, KC_PSLS, KC_BSPC, KC_PSLS, KC_4, KC_5, KC_6, KC_PAST, KC_ENT, KC_TRNS, KC_BSLS, KC_1, KC_2, KC_3, KC_PMNS, KC_RSFT, KC_RGUI, TG(2), TG(1), KC_RALT, KC_RCTL, KC_LEFT, KC_RGHT, KC_UP, KC_DOWN, KC_ENT, KC_SPC),
	[2] = LAYOUT(KC_ESC, KC_COPY, KC_PASTE, KC_WWW_HOME, KC_TRNS, KC_TRNS, KC_MS_ACCEL2, KC_TAB, KC_MS_WH_DOWN, KC_MS_UP, KC_MS_WH_UP, MACRO_1, MACRO_5, MACRO_0, KC_LCTL, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, MACRO_6, MACRO_2, KC_LSFT, KC_MS_WH_LEFT, KC_MS_DOWN, KC_MS_WH_RIGHT, MACRO_3, MACRO_4, KC_TAB, KC_LCTL, KC_LALT, TG(1), TG(2), KC_LGUI, KC_HOME, KC_END, KC_PGUP, KC_MS_BTN1, KC_MS_BTN2, KC_PGDN, KC_MS_ACCEL2, KC_COPY, KC_PASTE, KC_CUT, DEBUG, MACRO_0, KC_TAB, KC_MS_BTN1, KC_PGUP, KC_UP, KC_UP, KC_RGHT, KC_DEL, KC_BSPC, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, MACRO_2, KC_ENT, KC_MS_BTN2, KC_PGDN, KC_DOWN, KC_DOWN, KC_RGHT, MACRO_3, KC_RSFT, KC_RGUI, TG(2), TG(1), KC_RALT, KC_RCTL, KC_LEFT, KC_RGHT, KC_UP, KC_DOWN, KC_ENT, KC_SPC),
	[3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case MACRO_0:
                SEND_STRING(SS_DOWN(X_LSFT)SS_TAP(X_TAB}{ENT)SS_UP(X_LSFT));
                return false;
            case MACRO_1:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_R}{ENT)SS_UP(X_LGUI));
                return false;
            case MACRO_2:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_C}{ENT)SS_UP(X_LGUI));
                return false;
            case MACRO_3:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_V}{ENT)SS_UP(X_LGUI));
                return false;
            case MACRO_4:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_LEFT}{ENT)SS_UP(X_LGUI));
                return false;
            case MACRO_5:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_X}{ENT)SS_UP(X_LGUI));
                return false;
            case MACRO_6:
                SEND_STRING(SS_DOWN(X_LGUI)SS_TAP(X_RGHT}{ENT)SS_UP(X_LGUI));
                return false;
        }
    }

    return true;
};
