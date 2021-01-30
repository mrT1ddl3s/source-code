/* Copyright 2020 doodboard
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		         TG(1),   KC_PSLS, KC_PAST, KC_PMNS,
		         KC_7,    KC_8,    KC_9,    KC_PPLS,
		         KC_4,    KC_5,    KC_6,    KC_PPLS,
		KC_MUTE, KC_1,    KC_2,    KC_3,    KC_ENT,
		KC_BSPC, KC_0,    KC_0,    KC_DOT,  KC_ENT),

	KEYMAP(
		         TG(1),   KC_TRNS, KC_TRNS, KC_TRNS,
		         KC_HOME, KC_UP,   KC_PGUP, KC_TRNS,
		         KC_LEFT, KC_TRNS, KC_RGHT, KC_TRNS,
		KC_TRNS, KC_END,  KC_DOWN, KC_PGDN, KC_TRNS,
		TG(2),   KC_TRNS, KC_INS,  KC_DEL,  KC_TRNS),

	KEYMAP(
		         KC_TRNS, RGB_TOG, RGB_MOD, KC_TRNS,
		         RGB_HUI, RGB_SAI, RGB_VAI, KC_TRNS,
		         RGB_HUD, RGB_SAD, RGB_VAD, KC_TRNS,
		RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		TG(2),   RESET,   KC_TRNS, KC_TRNS, KC_TRNS),

};