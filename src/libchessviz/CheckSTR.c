#include <libchessviz/CheckSTR.h>
#include <stdio.h>
#include <stdlib.h>
int CheckSTR(char scanclmn)
{
    switch (scanclmn) {
    case '1':
        return 0;
    case '2':
        return 1;
    case '3':
        return 2;
    case '4':
        return 3;
    case '5':
        return 4;
    case '6':
        return 5;
    case '7':
        return 6;
    case '8':
        return 7;
    default:
        return -1;
    }
}
