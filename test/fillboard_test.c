#include <libchessviz/fillboard.h>

#include <ctest.h>

CTEST(scan_suite, check_fillboard)
{
    char realboard[9][9];
    char expboard[9][9]
            = {"rnbqkbnr",
               "pppppppp",
               "        ",
               "        ",
               "        ",
               "        ",
               "PPPPPPPP",
               "RNBQKBNR"};
    ;
    int i, j;

    fillboard(realboard);

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            ASSERT_EQUAL(expboard[i][j], realboard[i][j]);
}
