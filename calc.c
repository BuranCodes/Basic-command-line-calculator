#include <stdio.h>
#include <math.h>
double x,y; char c;


int parseInput(char* argv[]){
    sscanf(argv[1], "%lf%c%lf", &x, &c, &y);
    // error checking should be here
}

int calculation(char* argv[]) {
    if (parseInput(argv) == 1) return 1;
    switch (c)
    {
    case '+':
        printf("Result: %lf\n", (x+y));
        break;
    case '-':
        printf("Result: %lf\n", (x-y));
        break;
    case '*':
        printf("Result: %lf\n", (x*y));
        break;
    case '/':
        printf("Result: %lf\n", (x/y));
        break;
    case '%':
        printf("Result: %lf\n", (fmod(x, y)));
        break;
    case '^':
        printf("Result: %lf\n", (pow(x, y)));
        break;
    }
    return 0;
}
