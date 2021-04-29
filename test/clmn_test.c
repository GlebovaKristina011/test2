#include <libchessviz/CheckCLMN.h>

#include <ctest.h>

CTEST(scan_suite, check_clmn)
{
    char STARTA;
    char STARTB;
    char STARTC;
    char STARTD;
    char STARTE;
    char STARTF;
    char STARTG;
    char STARTH;
    char STARTNOT;
    STARTA = 'a';
    STARTB = 'b';
    STARTC = 'c';
    STARTD = 'd';
    STARTE = 'e';
    STARTF = 'f';
    STARTG = 'g';
    STARTH = 'h';
    STARTNOT = 'j';
    const int REALA = CheckCLMN(STARTA);
    const int REALB = CheckCLMN(STARTB);
    const int REALC = CheckCLMN(STARTC);
    const int REALD = CheckCLMN(STARTD);
    const int REALE = CheckCLMN(STARTE);
    const int REALF = CheckCLMN(STARTF);
    const int REALG = CheckCLMN(STARTG);
    const int REALH = CheckCLMN(STARTH);
    const int REALNOT = CheckCLMN(STARTNOT);
    const int EXPECTA = 0;
    const int EXPECTB = 1;
    const int EXPECTC = 2;
    const int EXPECTD = 3;
    const int EXPECTE = 4;
    const int EXPECTF = 5;
    const int EXPECTG = 6;
    const int EXPECTH = 7;
    const int EXPECTNOT = -1;
    ASSERT_EQUAL(EXPECTA, REALA);
    ASSERT_EQUAL(EXPECTB, REALB);
    ASSERT_EQUAL(EXPECTC, REALC);
    ASSERT_EQUAL(EXPECTD, REALD);
    ASSERT_EQUAL(EXPECTE, REALE);
    ASSERT_EQUAL(EXPECTF, REALF);
    ASSERT_EQUAL(EXPECTG, REALG);
    ASSERT_EQUAL(EXPECTH, REALH);
    ASSERT_EQUAL(EXPECTNOT, REALNOT);
}
