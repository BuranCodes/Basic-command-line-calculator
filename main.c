// Buran
// Basic command line calculator
#include <stdio.h>
#include "calc.h"

int main(int argc, char* argv[]) {
    if (argc > 2) {printf("Too many arguments!"); return 1;}
    else if (argc < 2) {printf("Argument needed!"); return 1;}

    if(calculation(argv) == 1) {printf("Error encountered while parsing your argument"); return 1;}
    else return 0; // Success!
}