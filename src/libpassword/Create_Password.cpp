#include <libpassword/Create_Password.h>
#include <libpassword/Check_Command.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

void Create_Password(int use_cap, int use_num, int use_amb, int column, int number, int size, int count_symbols, char Useful_Symbols[])
{

    char Capital_Symbols[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char Capital_Symbols_AMB[25] = "ABCDERFGHJKMNPQRSTUVWXYZ";
    char Numbers_Symbols[11] = "1234567890";
    char Numbers_Symbols_AMB[9] = "23456789";
    char Password[size];
    int num_slot = -5, cap_slot;
    int i, z;

    for (z = 0; z < number; z++) {
        for (i = 0; i < size; i++) {
            Password[i] = Useful_Symbols[rand() % (count_symbols + 1)];
        }

        if (use_num == 1) {
            num_slot = rand() % size;
            if (use_amb == 0) {
                Password[num_slot] = Numbers_Symbols[rand() % 10];
            }
            else {
                Password[num_slot] = Numbers_Symbols_AMB[rand() % 8];
            }
        }

        if (use_cap == 1) {
            do {
                cap_slot = rand() % size;
            } while (cap_slot == num_slot);
            if (use_amb == 0) {
                Password[cap_slot] = Capital_Symbols[rand() % 26];
            }
            else {
                Password[cap_slot] = Capital_Symbols_AMB[rand() % 24];
            }
        }

        for (i = 0; i < size; i++) {
            printf("%c", Password[i]);
        }
        if (column == 1)
            printf("\n\n");
        else
            printf("   ");
    }
    Check_Command();
}
