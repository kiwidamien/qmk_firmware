#include QMK_KEYBOARD_H


bool encoder_update_user(uint8_t index, bool clockwise) {
	if (index==0){
			if (clockwise){
					tap_code16(LOPT(KC_RGHT));
			} else {
					tap_code16(LOPT(KC_LEFT));
			}
	} else if (index==1){
			if (clockwise){
					tap_code16(C(KC_TAB));
			} else {
					tap_code16(S(C(KC_TAB)));
			}
	}
	return true;
}

