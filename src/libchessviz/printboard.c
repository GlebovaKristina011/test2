#include <libchessviz/printboard.h>
#include <stdio.h>
#include <stdlib.h>

void printboard(char board[][9])
{
    int i, z;
    printf("\n");
    for (i = 0; i < 8; i++) {
        printf("%d|", i + 1);
        for (z = 0; z < 8; z++) {
            printf("%c ", board[i][z]);
        }
        printf("\n");
    }
    printf("  _______________  \n  a b c d e f g h");
    printf("\n");
}
