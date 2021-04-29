#include <libchessviz/turn.h>
#include <stdio.h>
#include <stdlib.h>
void turn(char board[][9], int clmnst, int strst, int clmnend, int strend)
{
    int temp;
    temp = board[strst][clmnst];
    board[strst][clmnst] = ' ';
    board[strend][clmnend] = temp;
}
