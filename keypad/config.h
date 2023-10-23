// Copyright 2023 Ruba (@-)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MATRIX_ROWS 3
#define MATRIX_COLS 3
#define MATRIX_ROWS_PINS { A11, B7, C13 }
#define MATRIX_COL_PINS { A9, B9, B1 }
#define DYNAMIC_KEYMAP_LAYER_COUNT 2

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
