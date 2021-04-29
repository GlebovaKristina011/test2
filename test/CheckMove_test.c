#include <libchessviz/CheckMove.h>

#include <ctest.h>

CTEST(scan_suite, check_checkmove)
{
    char board[9][9];
    char scanclmn[8] = "abcdefgh";
    char scanstr[8] = "12345678";
    int realrightcommand;
    int exprightcommand;
    int i, z, j, l;
    exprightcommand = 1;
    for (i = 0; i < 8; i++) {
        for (z = 0; z < 8; z++) {
            for (j = 0; j < 8; j++) {
                for (l = 0; l < 8; l++) {
                    realrightcommand = CheckMove(
                            board,
                            scanclmn[i],
                            scanstr[z],
                            scanclmn[j],
                            scanstr[l]);
                    ASSERT_EQUAL(exprightcommand, realrightcommand);
                }
            }
        }
    }
    exprightcommand = 0;
    realrightcommand = CheckMove(board, 'j', 'j', 'e', '4');
    ASSERT_EQUAL(exprightcommand, realrightcommand);
    realrightcommand = CheckMove(board, 'e', '9', 'e', '4');
    ASSERT_EQUAL(exprightcommand, realrightcommand);
    realrightcommand = CheckMove(board, 'e', '2', 'j', '4');
    ASSERT_EQUAL(exprightcommand, realrightcommand);
    realrightcommand = CheckMove(board, 'e', '2', 'e', '9');
    ASSERT_EQUAL(exprightcommand, realrightcommand);
}
