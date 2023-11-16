/*
all pieces are unsigned 8 byte ints

 0  1  2  3  4  5  6  7
 8  9 10 11 12 13 14 15
16 17 18 19 20 21 22 23
24 25 26 27 28 29 30 31
32 33 34 35 36 37 38 39
40 41 42 43 44 45 46 47
48 49 50 51 52 53 54 55
56 57 58 59 60 61 62 63

the bits behave as coordinates for each piece.

can be utilized as rays of death (used for legal king moves),
collective white or black pieces, etc.
*/

#ifndef __PIECES_H
#define __PIECES_H
#define PIECES_PER_SIDE 16
#define WHITE 1
#define BLACK 0

#include <stdio.h>
#include <stdlib.h>


typedef struct Pieces_Of_Side {
    unsigned long long *all_pieces;
    
    // light and dark bishop will always be distinguishable by square
    unsigned long long *bishop_light, *queen, *king, *bishop_dark;

    // just # pieces on a side for non-unique-square pieces
    unsigned long long *rooks[2];
    unsigned long long *knights[2];
    unsigned long long *pawns[8];
} Pieces_Of_Side;

 
void set_piece(long long unsigned int *field, int square);
void clear_piece(long long unsigned int *field, int square);
int is_piece_at_square(long long unsigned int *field, int square);

void make_side(Pieces_Of_Side *side);
void make_default_position(Pieces_Of_Side *white, Pieces_Of_Side *black);

void print_board_basic(Pieces_Of_Side *white, Pieces_Of_Side *black);

#endif