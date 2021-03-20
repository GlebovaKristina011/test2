#include <stdlib.h>
#include <stdio.h>

void print(char chessboard[11][11])
{
    int i, z;
    for (i = 0; i < 8; i++) {
        for (z = 0; z < 9; z++) {
            if (z == 0)
                printf("%c|", chessboard[i][z]);
            else
                printf("%c ", chessboard[i][z]);
        }
        printf("\n");
    }
    printf("  _______________  \n  a b c d e f g h");
    printf("\n");
}
