#include <stdio.h>
#include <math.h>

int calculation(char* argv[])
{
        double var1, var2; char symbol;
        sscanf(argv[1], "%lf%c%lf", &var1, &symbol, &var2);
        // error checking should be here


switch (symbol) {
case '+':
        printf("Result: %lf\n", (var1+var2));
        break;
case '-':
        printf("Result: %lf\n", (var1-var2));
        break;
case '*':
        printf("Result: %lf\n", (var1*var2));
        break;
case '/':
        printf("Result: %lf\n", (var1/var2));
        break;
case '%':
        printf("Result: %lf\n", (fmod(var1, var2)));
        break;
case '^':
        printf("Result: %lf\n", (pow(var1, var2)));
        break;
}
        return 0;
}
