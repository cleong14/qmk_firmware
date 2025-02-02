/* Copyright 2020 zvecr <git@zvecr.com>
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
#pragma once

#include "quantum.h"

#define LAYOUT_hotswap( \
	K000,       K002, K003, K004, K005,       K007, K008, K009, K010, K011, K012, K013, K014, K015, K016, K017, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, K216, K217, \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312,       K314, K315, K316, K317, \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411,             K414,                   \
	K500,       K502, K503, K504, K505, K506, K507, K508, K509, K510, K511, K512,                   K516,       \
	K600, K601, K602,                   K606,                   K610, K611, K612,       K614, K615, K616, K617  \
) { \
	{ K000,  KC_NO, K002,  K003,  K004,  K005,  KC_NO, K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015,  K016,  K017 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215,  K216,  K217 }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  KC_NO, K314,  K315,  K316,  K317 }, \
	{ K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  KC_NO, KC_NO, K414,  KC_NO, KC_NO, KC_NO }, \
	{ K500,  KC_NO, K502,  K503,  K504,  K505,  K506,  K507,  K508,  K509,  K510,  K511,  K512,  KC_NO, KC_NO, KC_NO, K516,  KC_NO }, \
	{ K600,  K601,  K602,  KC_NO, KC_NO, KC_NO, K606,  KC_NO, KC_NO, KC_NO, K610,  K611,  K612,  KC_NO, K614,  K615,  K616,  K617 }  \
}
