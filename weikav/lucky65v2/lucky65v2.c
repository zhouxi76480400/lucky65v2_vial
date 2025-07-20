/* Copyright (C) 2023 Westberry Technology Corp., Ltd
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

#include QMK_KEYBOARD_H

#ifdef RGB_MATRIX_ENABLE

// clang-format off

led_config_t g_led_config = {
    {
        { 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, NO_LED },
        { 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, NO_LED },
        { 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, NO_LED },
        { 6,  7,  8,  9,  10, 11, 12, 13, 14, 15, 16, 17, 18, 18, NO_LED },
        { 5, NO_LED,  4, 3,  2, 1, 0, 20, 21, 22, 23, 24, 54, 53, NO_LED },
    },
    {
    { 122 , 64 },  // 64
    {  90 , 64 },  // 63
    {  58 , 64 },  // 62
    {  36 , 64 },  // 61
    {  19 , 64 },  // 60
    {   2 , 64 },  // 59
    {   8 , 48 },  // 45
    {  31 , 48 },  // 46
    {  44 , 48 },  // 47
    {  58 , 48 },  // 48
    {  71 , 48 },  // 49
    {  85 , 48 },  // 50
    {  98 , 48 },  // 51
    { 112 , 48 },  // 52
    { 126 , 48 },  // 53
    { 139 , 48 },  // 54
    { 153 , 48 },  // 55
    { 168 , 48 },  // 56
    { 183 , 48 },  // 57
    { 197 , 48 },  // 58
    { 143 , 64 },  // 65
    { 156 , 64 },  // 66
    { 170 , 64 },  // 67
    { 183 , 64 },  // 68
    { 197 , 64 },  // 69
    { 197 , 32 },  // 44
    { 178 , 32 },  // 43
    { 160 , 32 },  // 42
    { 146 , 32 },  // 41
    { 132 , 32 },  // 40
    { 119 , 32 },  // 39
    { 105 , 32 },  // 38
    {  92 , 32 },  // 37
    {  78 , 32 },  // 36
    {  64 , 32 },  // 35
    {  51 , 32 },  // 34
    {  37 , 32 },  // 33
    {  24 , 32 },  // 32
    {   5 , 32 },  // 31
    {   3 , 16 },  // 16
    {  20 , 16 },  // 17
    {  34 , 16 },  // 18
    {  48 , 16 },  // 19
    {  61 , 16 },  // 20
    {  75 , 16 },  // 21
    {  88 , 16 },  // 22
    { 102 , 16 },  // 23
    { 115 , 16 },  // 24
    { 129 , 16 },  // 25
    { 143 , 16 },  // 26
    { 156 , 16 },  // 27
    { 170 , 16 },  // 28
    { 183 , 16 },  // 29
    { 197 , 16 },  // 30
    { 197 ,  0 },  // 14
    { 180 ,  0 },  // 13
    { 163 ,  0 },  // 12
    { 149 ,  0 },  // 11
    { 136 ,  0 },  // 10
    { 122 ,  0 },  // 9
    { 109 ,  0 },  // 8
    {  95 ,  0 },  // 7
    {  81 ,  0 },  // 6
    {  68 ,  0 },  // 5
    {  54 ,  0 },  // 4
    {  41 ,  0 },  // 3
    {  27 ,  0 },  // 2
    {  14 ,  0 },  // 1
    {   0 ,  0 }   // 0
}, {
      LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
      LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
      LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
      LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
      LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT
}

};

// clang-format on
#endif
