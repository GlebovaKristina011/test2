#include <libchessviz/turn.h>
#include <libchessviz/printboard.h>
#include <stdlib.h>
#include <stdio.h>


int main()
{
    char board[9][10]
        = {
            "1rnbqkbnr",
            "2pppppppp",
            "3        ",
            "4        ",
            "5        ",
            "6        ",
            "7PPPPPPPP",
            "8RNBQKBNR"
          };
    printboard(board);
    while (1) {
		hod(board);
    }
    return 0;
}

