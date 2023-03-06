#include <stdio.h>
#include <math.h>

int calculation(char* argv[]) {
    double Var1, Var2; char Symbol;
    sscanf(argv[1], "%lf%c%lf", &Var1, &Symbol, &Var2);
    // error checking should be here


    switch (Symbol)
    {
    case '+':
        printf("Result: %lf\n", (Var1+Var2));
        break;
    case '-':
        printf("Result: %lf\n", (Var1-Var2));
        break;
    case '*':
        printf("Result: %lf\n", (Var1*Var2));
        break;
    case '/':
        printf("Result: %lf\n", (Var1/Var2));
        break;
    case '%':
        printf("Result: %lf\n", (fmod(Var1, Var2)));
        break;
    case '^':
        printf("Result: %lf\n", (pow(Var1, Var2)));
        break;
    }
    return 0;
}
