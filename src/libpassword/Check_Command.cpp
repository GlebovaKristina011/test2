#include <libpassword/Check_Command.h>
#include <libpassword/Create_Symbols.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

void Check_Command()
{
    std::string command;
    int use_cap = 1, use_num = 1, use_amb = -1, use_spec = 1;
    int number = 5, size = 10, column = 1;

    while (1) {
        std::cin >> command;
        if (command == "-C" || command == "--column")
            column = 1;
        if (command == "-L" || command == "--line")
            column = -1;
        if (command == "-n" || command == "--numbers")
            use_num = -use_num;
        if (command == "-A" || command == "--capital")
            use_cap = -use_cap;
        if (command == "-@" || command == "--symbols")
            use_spec = -use_spec;
        if (command == "-M" || command == "--ambiguous")
            use_amb = -use_amb;
        if (command == "-M" || command == "--ambiguous")
            use_amb = -use_amb;
        if (command == "-N" || command == "--number") {
            printf("\n Write number of passwords: ");
            scanf("%d", &number);
        }
        if (command == "-z" || command == "--size") {
            printf("\n Write size of passwords: ");
            scanf("%d", &size);
        }
        if (command == "-p" || command == "--start")
            break;
    }

    Create_Symbols(use_cap, use_num, use_amb, use_spec, column, number, size);
}
