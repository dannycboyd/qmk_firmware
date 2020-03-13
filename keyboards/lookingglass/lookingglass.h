/* Copyright 2020 Danny Boyd
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

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

/* #define LAYOUT( \
//     
// ) \
// { \
// }
*/
#define LAYOUT( \
   l00, l01,	l02,	l03,	l04,	l05,	l06,    k00,	k01,	k02,	k03,	k04,	k05, \
   l10,	l11,	l12,	l13,	l14,	l15,	l16,    k10,	k11,	k12,	k13,	k14,	k15,	k16, \
   l20,	l21,	l22,	l23,	l24,	l25,	l26,    k20,	k21,	k22,	k23,	k24,	k25,	k26,	k27, \
   l30,	l31,	l32,	l33,	l34,	l35,	l36,    k30,	k31,	k32,	k33,	k34,	k35,    k37, \
   l40,	l41,	l42,	l43,	l44,	l45,	l46,    k40,	k41,	k42,	k43,	k44,	k45,	k46,	k47, \
   l50,	l51,            l53,            l55,    l56,    k50,                 k53,                            k57 \
) \
{ \
    { l00,	l01,	l02,	l03,	l04,	l05,	l06 }, \
    { l10,	l11,	l12,	l13,	l14,	l15,	l16 }, \
    { l20,	l21,	l22,	l23,	l24,	l25,	l26 }, \
    { l30,	l31,	l32,	l33,	l34,	l35,	l36 }, \
    { l40,	l41,	l42,	l43,	l44,	l45,	l46 }, \
    { l50,	l51,	KC_NO,	l53,	KC_NO,  l55,    l56 }, \
    { k00,   k01,    k02,    k03,    k04,    k05,    KC_NO,  KC_NO }, \
    { k10,   k11,    k12,    k13,    k14,    k15,    k16,    KC_NO }, \
    { k20,	k21,	k22,	k23,	k24,	k25,	k26,	k27 }, \
    { k30,	k31,	k32,	k33,	k34,	k35,	KC_NO,	k37 }, \
    { k40,	k41,	k42,	k43,	k44,	k45,	k46,	k47 }, \
    { k50,	KC_NO,	KC_NO,	k53,	KC_NO,	KC_NO,	KC_NO,	k57 } \
}
