#include <libchessviz/move.h>
#include <libchessviz/print.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char chessboard[11][11] = {
        "1rnbqkbnr",
        "2pppppppp",
        "3        ",
        "4        ",
        "5        ",
        "6        ",
        "7PPPPPPPP",
        "8RNBQKBNR"
    };
    print(chessboard);
    while (1) {
        move(chessboard);
    }
    return 0;
}
