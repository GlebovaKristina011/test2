#include <libchessviz/CheckSTR.h>

#include <ctest.h>

CTEST(scan_suite, check_clmn)
{
    char START1;
    char START2;
    char START3;
    char START4;
    char START5;
    char START6;
    char START7;
    char START8;
    char STARTNOT;
    START1 = '1';
    START2 = '2';
    START3 = '3';
    START4 = '4';
    START5 = '5';
    START6 = '6';
    START7 = '7';
    START8 = '8';
    STARTNOT = '0';
    const int REAL1 = CheckSTR(START1);
    const int REAL2 = CheckSTR(START2);
    const int REAL3 = CheckSTR(START3);
    const int REAL4 = CheckSTR(START4);
    const int REAL5 = CheckSTR(START5);
    const int REAL6 = CheckSTR(START6);
    const int REAL7 = CheckSTR(START7);
    const int REAL8 = CheckSTR(START8);
    const int REALNOT = CheckSTR(STARTNOT);
    const int EXPECT1 = 0;
    const int EXPECT2 = 1;
    const int EXPECT3 = 2;
    const int EXPECT4 = 3;
    const int EXPECT5 = 4;
    const int EXPECT6 = 5;
    const int EXPECT7 = 6;
    const int EXPECT8 = 7;
    const int EXPECTNOT = -1;
    ASSERT_EQUAL(EXPECT1, REAL1);
    ASSERT_EQUAL(EXPECT2, REAL2);
    ASSERT_EQUAL(EXPECT3, REAL3);
    ASSERT_EQUAL(EXPECT4, REAL4);
    ASSERT_EQUAL(EXPECT5, REAL5);
    ASSERT_EQUAL(EXPECT6, REAL6);
    ASSERT_EQUAL(EXPECT7, REAL7);
    ASSERT_EQUAL(EXPECT8, REAL8);
    ASSERT_EQUAL(EXPECTNOT, REALNOT);
}
