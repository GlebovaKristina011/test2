#include <stdlib.h>
#include <stdio.h>
#include <libchessviz/printboard.h>
char hod(char chessboard[9][10])
{
    int scanstr, scanstr2, clmnst, clmnend, flag;
    char scanclmn, scanclmn2, temp;
    flag = 0;
    scanf("%c%d-%c%d", &scanclmn, &scanstr, &scanclmn2, &scanstr2);
    switch (scanclmn) {
    case 'a':
        clmnst = 1;
        break;
    case 'b':
        clmnst = 2;
        break;
    case 'c':
        clmnst = 3;
        break;
    case 'd':
        clmnst = 4;
        break;
    case 'e':
        clmnst = 5;
        break;
    case 'f':
        clmnst = 6;
        break;
    case 'g':
        clmnst = 7;
        break;
    case 'h':
        clmnst = 8;
        break;
    default:
        flag = 1;
        break;
    }
    switch (scanclmn2) {
    case 'a':
        clmnend = 1;
        break;
    case 'b':
        clmnend = 2;
        break;
    case 'c':
        clmnend = 3;
        break;
    case 'd':
        clmnend = 4;
        break;
    case 'e':
        clmnend = 5;
        break;
    case 'f':
        clmnend = 6;
        break;
    case 'g':
        clmnend = 7;
        break;
    case 'h':
        clmnend = 8;
        break;
    default:
        flag = 1;
        break;
    }
    switch (scanstr) {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;

    default:
        flag = 1;
        break;
    }
    switch (scanstr2) {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;

    default:
        flag = 1;
        break;
    }
    if (flag == 0) {
        temp = chessboard[scanstr - 1][clmnst];
        chessboard[scanstr - 1][clmnst] = ' ';
        chessboard[scanstr2 - 1][clmnend] = temp;
        printboard(chessboard);
    }

    return chessboard[9][10];
}
