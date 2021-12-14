#include <stdint.h>
#include "annepro2.h"
#include "qmk_ap2_led.h"

enum anne_pro_layers {
  _BASE_LAYER,
  _ARR_LAYER,
<<<<<<< HEAD
=======
  _ARR_LAYER2,
>>>>>>> final stage of this, changed keebs
  _FN1_LAYER,
  _FN2_LAYER,
};

<<<<<<< HEAD
typedef struct {
    bool is_press_action;
    uint8_t state;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD = 2,
    DOUBLE_TAP = 3,
    DOUBLE_HOLD = 4,
    TRIPLE_TAP = 5,
    TRIPLE_HOLD = 6,
};

// Tap Dance enums
enum {
    ALT_OSL1 = 0,
};

// Function associated with all tap dances
uint8_t cur_dance(qk_tap_dance_state_t *state);
// Functions associated with individual tap dances
void alt_finished(qk_tap_dance_state_t *state, void *user_data);
void alt_reset(qk_tap_dance_state_t *state, void *user_data);

=======
>>>>>>> final stage of this, changed keebs
// This is ROW*MATRIX_COLS + COL
#define CAPS_LOCATION (MATRIX_COLS * 2 + 0)

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Empty keyboard
  * ,-----------------------------------------------------------------------------------------.
  * |     |     |     |     |     |     |     |     |     |     |     |     |     |           |
  * |-----------------------------------------------------------------------------------------+
  * |        |     |     |     |     |     |     |     |     |     |     |     |     |        |
  * |-----------------------------------------------------------------------------------------+
  * |         |     |     |     |     |     |     |     |     |     |     |     |             |
  * |-----------------------------------------------------------------------------------------+
  * |            |     |     |     |     |     |     |     |     |     |     |                |
  * |-----------------------------------------------------------------------------------------+
  * |       |       |       |                                 |       |       |       |       |
  * \-----------------------------------------------------------------------------------------/
  */
  /*
  * Layer _BASE_LAYER
  * ,-----------------------------------------------------------------------------------------.
  * |  `  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |    Bksp   |
  * |-----------------------------------------------------------------------------------------+
  * | Tab    |  q  |  w  |  e  |  r  |  t  |  y  |  u  |  i  |  o  |  p  |  [  |  ]  |   \    |
  * |-----------------------------------------------------------------------------------------+
  * | esc     |  a  |  s  |  d  |  f  |  g  |  h  |  j  |  k  |  l  |  ;  |  '  |    Enter    |
  * |-----------------------------------------------------------------------------------------+
  * | Shift      |  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |  .  |  /  |    Shift       |
  * |-----------------------------------------------------------------------------------------+
<<<<<<< HEAD
  * | Ctrl  |  L1   |  OSL  |               space             |  R1   |  FN1  |  FN2  | Ctrl  |
=======
  * | Ctrl  |  L1   |  Alt  |               space             |  R1   |  FN1  |  FN2  | Ctrl  |
>>>>>>> final stage of this, changed keebs
  * \-----------------------------------------------------------------------------------------/
  */
  [_BASE_LAYER] = KEYMAP(
    KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL,   KC_BSPC,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,  KC_BSLS,
    LT(_FN1_LAYER, KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,         KC_ENT,
    KC_LSFT,KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
<<<<<<< HEAD
    KC_LCTL,KC_LGUI, TD(ALT_OSL1),      KC_SPC,             KC_RGUI, MO(_FN1_LAYER), MO(_FN2_LAYER), KC_RCTL
=======
    KC_LCTL,KC_LGUI, KC_LALT,      KC_SPC,             KC_RGUI, MO(_FN1_LAYER), MO(_FN2_LAYER), KC_RCTL
>>>>>>> final stage of this, changed keebs
  ),
  /*
  * Layer _ARR_LAYER
  * ,-----------------------------------------------------------------------------------------.
  * |     |     |     |     |     |     |     |     |     |     |     |     |     |           |
  * |-----------------------------------------------------------------------------------------+
  * |        |     |     |     |     |     |     |HOME | END |     | PGU |     |     |        |
  * |-----------------------------------------------------------------------------------------+
  * |         |     |     |     |     |     |  <  |  v  |  ^  |  >  | PGD |     |             |
  * |-----------------------------------------------------------------------------------------+
  * |            |     |     |     |     |     |     |     |     |     |     |                |
  * |-----------------------------------------------------------------------------------------+
  * |       |       |       |                                 |       |  FN1  |  FN2  | BASE  |
  * \-----------------------------------------------------------------------------------------/
  */
  [_ARR_LAYER] = KEYMAP(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_END, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS,  KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_PGDN, KC_TRNS,         KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,             KC_TRNS,  MO(_FN1_LAYER),  MO(_FN2_LAYER), TO(0)
  ),
<<<<<<< HEAD
=======
  /*
  * Layer _ARR_LAYER2
  * ,-----------------------------------------------------------------------------------------.
  * |     |     |     |     |     |     |     |     |     |     |     |     |     |           |
  * |-----------------------------------------------------------------------------------------+
  * |        |     |     |     |     |     |     |     |  ^  |     |     |     |     |        |
  * |-----------------------------------------------------------------------------------------+
  * |         |     |     |     |     |     |     |  <  |  v  |  >  |     |     |             |
  * |-----------------------------------------------------------------------------------------+
  * |            |     |     |     |     |     |     |     |     |     |     |                |
  * |-----------------------------------------------------------------------------------------+
  * |       |       |       |                                 |       |  FN1  |  FN2  | BASE  |
  * \-----------------------------------------------------------------------------------------/
  */
  [_ARR_LAYER2] = KEYMAP(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS,         KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,             KC_TRNS,  MO(_FN1_LAYER),  MO(_FN2_LAYER), TO(0)
  ),
>>>>>>> final stage of this, changed keebs
  /* Layer _FN1_LAYER
  * ,-----------------------------------------------------------------------------------------.
  * | ESC | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |           |
  * |-----------------------------------------------------------------------------------------+
  * |        |Home |  ^  | End | PGU |     |     | Home| End |     | PGU |     |     |        |
  * |-----------------------------------------------------------------------------------------+
  * |         |  <- |  v  | ->  | PGD |     | <-  | \/  |  ^  | ->  | PGD |     |             |
  * |-----------------------------------------------------------------------------------------+
  * |            | Ins | Del |     |     |     |     |     |     | Ins | Del |                |
  * |-----------------------------------------------------------------------------------------+
  * |       |       | LALT  |                                 |       |       |       |       |
  * \-----------------------------------------------------------------------------------------/
  */
  [_FN1_LAYER] = KEYMAP(
    KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,   KC_TRNS,
    KC_TRNS, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_TRNS, KC_TRNS, KC_HOME, KC_END, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS,  KC_TRNS,
    KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_PGDN, KC_TRNS,         KC_TRNS,
    KC_TRNS, KC_INSERT, KC_DELETE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INSERT, KC_DELETE, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_LALT,      KC_TRNS,             KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS
  ),
  /* Layer _FN2_LAYER
  * ,-----------------------------------------------------------------------------------------.
  * | USB |LEDON|LEDOF|LED<<|LED>>|     |     |     |     |     | MUTE| VOL-| VOL+|  PrintSc  |
  * |-----------------------------------------------------------------------------------------+
  * | BT_UN  | BT1 | BT2 | BT3 | BT4 |     |     |     |     |     |     |MPREV|MNEXT| > / || |
  * |-----------------------------------------------------------------------------------------+
  * |   Caps  |     |     |     |     |     |     |     |     |     |     |     |             |
  * |-----------------------------------------------------------------------------------------+
  * |            |     |     |     |     |     |     |     |     |     |     |                |
  * |-----------------------------------------------------------------------------------------+
<<<<<<< HEAD
  * |       |       |       |                                 |       |       |       | ARR_L |
=======
  * |       |       |       |                                 | ARR_L2|       |       | ARR_L |
>>>>>>> final stage of this, changed keebs
  * \-----------------------------------------------------------------------------------------/
  */
  [_FN2_LAYER] = KEYMAP(
    KC_AP2_USB, KC_AP_LED_ON, KC_AP_LED_OFF, KC_AP_LED_PREV_PROFILE, KC_AP_LED_NEXT_PROFILE, KC_AP_LED_NEXT_INTENSITY, KC_AP_LED_SPEED, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU,   KC_PSCR,
    KC_AP2_BT_UNPAIR, KC_AP2_BT1, KC_AP2_BT2, KC_AP2_BT3, KC_AP2_BT4, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT,  KC_MPLY,
    KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
<<<<<<< HEAD
    KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,             KC_TRNS,  KC_TRNS,  KC_TRNS, TG(_ARR_LAYER)
=======
    KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS,             TG(_ARR_LAYER2),  KC_TRNS,  KC_TRNS, TG(_ARR_LAYER)
>>>>>>> final stage of this, changed keebs
  ),
};

const uint16_t keymaps_size = sizeof(keymaps);

void matrix_init_user(void) {}
void matrix_scan_user(void) {}

layer_state_t layer_state_set_user(layer_state_t layer) {
    return layer;
}

bool led_update_user(led_t led_state) {
    static uint8_t caps_state = 0;
    if (caps_state != led_state.caps_lock) {
        if (led_state.caps_lock) {
<<<<<<< HEAD
            annepro2LedSetMask(CAPS_LOCATION);
        } else {
            annepro2LedClearMask(CAPS_LOCATION);
=======
            const annepro2Led_t color = {
                .p.red = 0xff,
                .p.green = 0x00,
                .p.blue = 0x00,
                .p.alpha = 0xff
            };

            annepro2LedMaskSetKey(2, 0, color);
        } else {
            const annepro2Led_t color = {
                .p.red = 0xff,
                .p.green = 0x00,
                .p.blue = 0x00,
                .p.alpha = 0x00
            };

            annepro2LedMaskSetKey(2, 0, color);
>>>>>>> final stage of this, changed keebs
        }
        caps_state = led_state.caps_lock;
    }
    return true;
}
<<<<<<< HEAD

uint8_t cur_dance(qk_tap_dance_state_t *state) {
    switch (state->count) {
        case 1:
            if (state->pressed) return SINGLE_HOLD;
            else return SINGLE_TAP;
            break;
        case 2:
            if (state->pressed) return DOUBLE_HOLD;
            else return DOUBLE_TAP;
            break;
        case 3:
            if (state->interrupted || !state->pressed) return TRIPLE_TAP;
            else return TRIPLE_HOLD;
            break;
        default:
            return 8;
    }
}

static tap alttap_state = {
    .is_press_action = true,
    .state = 0,
};

void alt_finished(qk_tap_dance_state_t *state, void *user_data) {
    alttap_state.state = cur_dance(state);
    switch (alttap_state.state) {
        case SINGLE_TAP: set_oneshot_layer(_FN1_LAYER, ONESHOT_START); clear_oneshot_layer_state(ONESHOT_PRESSED); break;
        case SINGLE_HOLD: register_code(KC_LALT); break;
        // case DOUBLE_TAP: set_oneshot_layer(_FN1_LAYER, ONESHOT_START); set_oneshot_layer(_FN1_LAYER, ONESHOT_PRESSED); break;
        case DOUBLE_TAP: register_code(KC_LALT); break;
        case DOUBLE_HOLD: register_code(KC_LALT); layer_on(_FN1_LAYER); break;
    }
}

void alt_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (alttap_state.state) {
        case SINGLE_TAP: break;
        case SINGLE_HOLD: unregister_code(KC_LALT); break;
        case DOUBLE_TAP: unregister_code(KC_LALT); break;
        case DOUBLE_HOLD: layer_off(_FN1_LAYER); unregister_code(KC_LALT); break;
    }
    alttap_state.state = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [ALT_OSL1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, alt_finished, alt_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_TRNS:
        case KC_NO:
            // Always cancel one-shot layer when another key gets pressed.
            if (record->event.pressed && is_oneshot_layer_active()) {
                clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
                return false;
            }
            return true;
        case RESET:
            // Don't allow reset from oneshot layer state
            if (record->event.pressed && is_oneshot_layer_active()) {
                clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
                return false;
            }
            return true;
        default:
            return true;
    }
    return true;
}
=======
>>>>>>> final stage of this, changed keebs
