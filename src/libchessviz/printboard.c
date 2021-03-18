#include <stdlib.h>
#include <stdio.h>

void printboard(char chessboard1[9][10])
{
    int i, z;
    for (i = 0; i < 8; i++) {
        for (z = 0; z < 9; z++) {
            if (z == 0)
                printf("%c|", chessboard1[i][z]);
            else
                printf("%c ", chessboard1[i][z]);
        }
        printf("\n");
    }
    printf("  _______________  \n  a b c d e f g h");
    printf("\n");
}
