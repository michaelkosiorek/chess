#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pieces.h"

int main(int argc, char *argv[]) {

    /*
    unsigned long *w_rook, *w_knight, *w_bishopL, *w_queen, *w_king, *w_bishopD, *w_knight, *w_rook;
    unsigned long *b_rook, *b_knight, *b_bishopL, *b_queen, *b_king, *b_bishopD, *b_knight, *b_rook;

    unsigned long *pieces[] = {*b_rook, *b_knight, *b_bishopL, *b_queen, *b_king, *b_bishopD, *b_knight, *b_rook,
                              *w_rook, *w_knight, *w_bishopL, *w_queen, *w_king, *w_bishopD, *w_knight, *w_rook};
    */

    Pieces_Of_Side *white;
    Pieces_Of_Side *black;
    make_side(white);
    make_side(black);

    make_default_position(white, black);

    // print_board_basic(white, black);


    return 0;
}