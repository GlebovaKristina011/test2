#include <libchessviz/CheckMove.h>
#include <libchessviz/ScanMove.h>
#include <stdio.h>
#include <stdlib.h>
int ScanMove(char board[][9])
{
    char scanclmn, scanclmn2, scanstr, scanstr2, command[5];
    int rightcommand;

    scanf("%s", command);
    scanclmn = command[0];
    scanstr = command[1];
    scanclmn2 = command[3];
    scanstr2 = command[4];

    rightcommand = CheckMove(board, scanclmn, scanstr, scanclmn2, scanstr2);

    return rightcommand;
}
