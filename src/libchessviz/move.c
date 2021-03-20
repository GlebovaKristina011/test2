#include <stdlib.h>
#include <stdio.h>
#include <libchessviz/print.h>
char move(char chessboard[11][11])
{
    char sstrok1, sstrok2, temp;
    int stab1, stab2, rstrok1, rstrok2, flag, trash;

    scanf("%c%d-%c%d", &sstrok1, &stab1, &sstrok2, &stab2);
    flag = 0;
    if (sstrok1 == 'a')
        rstrok1 = 1;
    else if (sstrok1 == 'b')
        rstrok1 = 2;
    else if (sstrok1 == 'c')
        rstrok1 = 3;
    else if (sstrok1 == 'd')
        rstrok1 = 4;
    else if (sstrok1 == 'e')
        rstrok1 = 5;
    else if (sstrok1 == 'f')
        rstrok1 = 6;
    else if (sstrok1 == 'g')
        rstrok1 = 7;
    else if (sstrok1 == 'h')
        rstrok1 = 8;
    else
        flag = 1;

    if (sstrok2 == 'a')
        rstrok2 = 1;
    else if (sstrok2 == 'b')
        rstrok2 = 2;
    else if (sstrok2 == 'c')
        rstrok2 = 3;
    else if (sstrok2 == 'd')
        rstrok2 = 4;
    else if (sstrok2 == 'e')
        rstrok2 = 5;
    else if (sstrok2 == 'f')
        rstrok2 = 6;
    else if (sstrok2 == 'g')
        rstrok2 = 7;
    else if (sstrok2 == 'h')
        rstrok2 = 8;
    else
        flag = 1;

    if (stab1 >= 1 && stab1 <= 8)
        trash = flag;
    else
        flag = 1;

    if (stab2 >= 1 && stab2 <= 8)
        trash = flag;
    else
        flag = 1;

    if (flag == 0) {
        temp = chessboard[stab1 - 1][rstrok1];
        chessboard[stab1 - 1][rstrok1] = ' ';
        chessboard[stab2 - 1][rstrok2] = temp;
        print(chessboard);
    }

    return chessboard[9][10];
}
