#include <libchessviz/fillboard.h>
#include <libchessviz/turn.h>

#include <ctest.h>

CTEST(scan_suite, check_turn)
{
    char realboard[9][9];
    char expboardp[9][9]
            = {"rnbqkbnr",
               "pppp ppp",
               "        ",
               "    p   ",
               "        ",
               "        ",
               "PPPPPPPP",
               "RNBQKBNR"};
    ;
    char expboardr[9][9]
            = {" nbqkbnr",
               "pppppppp",
               "        ",
               "        ",
               "r       ",
               "        ",
               "PPPPPPPP",
               "RNBQKBNR"};
    char expboardn[9][9]
            = {"r bqkbnr",
               "pppppppp",
               "n       ",
               "        ",
               "        ",
               "        ",
               "PPPPPPPP",
               "RNBQKBNR"};
    char expboardb[9][9]
            = {"rn qkbnr",
               "pppppppp",
               "b       ",
               "        ",
               "        ",
               "        ",
               "PPPPPPPP",
               "RNBQKBNR"};
    char expboardq[9][9]
            = {"rnb kbnr",
               "pppppppp",
               "        ",
               "        ",
               "        ",
               "   q    ",
               "PPPPPPPP",
               "RNBQKBNR"};
    char expboardk[9][9]
            = {"rnbq bnr",
               "pppppkpp",
               "        ",
               "        ",
               "        ",
               "        ",
               "PPPPPPPP",
               "RNBQKBNR"};
    int i, j;

    fillboard(realboard);
    turn(realboard, 4, 1, 4, 3);

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            ASSERT_EQUAL(expboardp[i][j], realboard[i][j]);

    fillboard(realboard);
    turn(realboard, 0, 0, 0, 4);

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            ASSERT_EQUAL(expboardr[i][j], realboard[i][j]);

    fillboard(realboard);
    turn(realboard, 1, 0, 0, 2);

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            ASSERT_EQUAL(expboardn[i][j], realboard[i][j]);

    fillboard(realboard);
    turn(realboard, 2, 0, 0, 2);

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            ASSERT_EQUAL(expboardb[i][j], realboard[i][j]);

    fillboard(realboard);
    turn(realboard, 3, 0, 3, 5);

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            ASSERT_EQUAL(expboardq[i][j], realboard[i][j]);

    fillboard(realboard);
    turn(realboard, 4, 0, 5, 1);

    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            ASSERT_EQUAL(expboardk[i][j], realboard[i][j]);
}
