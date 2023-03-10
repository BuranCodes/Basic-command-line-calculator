// Buran
// Basic command line calculator
#include <stdio.h>
#include "calc.h"

int main(int argc, char* argv[])
{
    if (argc > 2) {
            printf("Too many arguments!\n");
            return 1;
    }
    else if (argc < 2) {
            printf("Argument needed!\n");
            return 1;
    }

    if(calculation(argv) == 1) {
            printf("Error encountered while parsing your argument. Please make sure it's in this format: Variable, Symbol, Variable\n");
            return 1;
    }
    else
            return 0; // Success!
}