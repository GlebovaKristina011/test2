#include <libchessviz/ScanMove.h>
#include <libchessviz/fillboard.h>
#include <libchessviz/printboard.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char board[9][9];
    int rightcommand;
    fillboard(board);
    while (1) {
        rightcommand = ScanMove(board);
        if (rightcommand == 1)
            printboard(board);
        else
            printf("\n going out of bounds\n\n");
    }
    return 0;
}
