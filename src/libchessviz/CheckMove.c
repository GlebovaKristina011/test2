#include <libchessviz/CheckCLMN.h>
#include <libchessviz/CheckMove.h>
#include <libchessviz/CheckSTR.h>
#include <libchessviz/turn.h>
#include <stdio.h>
#include <stdlib.h>
int CheckMove(
        char board[][9],
        char scanclmn,
        char scanstr,
        char scanclmn2,
        char scanstr2)
{
    int clmnst, clmnend, strst, strend;

    clmnst = CheckCLMN(scanclmn);
    clmnend = CheckCLMN(scanclmn2);

    strst = CheckSTR(scanstr);
    strend = CheckSTR(scanstr2);

    if (clmnst != -1 && clmnend != -1 && strst != -1 && strend != -1) {
        turn(board, clmnst, strst, clmnend, strend);
        return 1;
    } else
        return 0;
}
