#include <libpassword/Create_Symbols.h>
#include <libpassword/Create_Password.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

void Create_Symbols(int use_cap, int use_num, int use_amb, int use_spec, int column, int number, int size)
{
    char Normal_Symbols[27] = "abcdefghijklmnopqrstuvwxyz";
    char Normal_Symbols_AMB[25] = "abcderfghjkmnpqrstuvwxyz";
    char Capital_Symbols[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char Capital_Symbols_AMB[25] = "ABCDERFGHJKMNPQRSTUVWXYZ";
    char Numbers_Symbols[11] = "1234567890";
    char Numbers_Symbols_AMB[9] = "23456789";
    char Special_Symbols[30] = "!#$%&'()*+,-./:;<=>?@[]^_`{|}";
    char Useful_Symbols[95];
    int i, count_symbols = -1;

    if (use_amb == 1) {
        for (i = 0; i < 24; i++) {
            count_symbols++;
            Useful_Symbols[count_symbols] = Normal_Symbols_AMB[i];
        }
    }
    else {
        for (i = 0; i < 26; i++) {
            count_symbols++;
            Useful_Symbols[count_symbols] = Normal_Symbols[i];
        }
    }

    if (use_cap == 1) {
        if (use_amb == 1) {
            for (i = 0; i < 24; i++) {
                count_symbols++;
                Useful_Symbols[count_symbols] = Capital_Symbols_AMB[i];
            }
        }
        else {

            for (i = 0; i < 26; i++) {
                count_symbols++;
                Useful_Symbols[count_symbols] = Capital_Symbols[i];
            }
        }
    }

    if (use_num == 1) {
        if (use_amb == 1) {
            for (i = 0; i < 8; i++) {
                count_symbols++;
                Useful_Symbols[count_symbols] = Numbers_Symbols_AMB[i];
            }
        }
        else {
            for (i = 0; i < 10; i++) {
                count_symbols++;
                Useful_Symbols[count_symbols] = Numbers_Symbols[i];
            }
        }
    }

    if (use_spec == 1) {
        for (i = 0; i < 29; i++) {
            count_symbols++;
            Useful_Symbols[count_symbols] = Special_Symbols[i];
        }
    }

    Create_Password(use_cap, use_num, use_amb, column, number, size, count_symbols, Useful_Symbols);
}
