/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

#include <bitboard.h>
#include <board.h>
#include <attacks.h>

int main(void) {
    // This stuff is just for testing purposes

    print_bitboard(not_a_file);
    print_bitboard(not_ab_file);
    print_bitboard(not_h_file);
    print_bitboard(not_hg_file);
}
