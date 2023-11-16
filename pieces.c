#include <stdio.h>
#include <stdlib.h>
#include "pieces.h"

void set_piece(long long unsigned int *field, int square) {
    // *field |= 1ULL << square;
}

void clear_piece(long long unsigned int *field, int square) {
    *field &= ~(1ULL << square);
}

int piece_is_at_square(long long unsigned int *field, int square) {
    return (*field & (1ULL << square))!=0;
}

void make_side(Pieces_Of_Side *side) {
    side = malloc(sizeof(Pieces_Of_Side));
}

void print_board_basic(Pieces_Of_Side *white, Pieces_Of_Side *black) {
    // board is 8x8, *2 for each paired whitespace or newline per piece.

    char board[128];

    for (int i=0; i < 128; i++) {
        if (i%2==0) board[i]='X';
        else if (i%16==0) board[i]='\n';
        else board[i]=' ';
    }
    board[127] = '\0';
    printf("Board:\n%s", board);




}

void make_default_position(Pieces_Of_Side *white, Pieces_Of_Side *black) {
    

    // ugly but doesn't have to be efficient
    // whateva, i tried and it was miserable

    for (int i=0; i < 8; i++) {
        set_piece(white->pawns[i], i+48);
        set_piece(black->pawns[i], i+8);
    }

    for (int j=0; j < 8; j++) {
        


    }


    
}