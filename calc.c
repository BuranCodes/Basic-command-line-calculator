#include <stdio.h>
#include <math.h>
int x,y; char c;
// TODO: double instead of int


int parseInput(char* argv[]){
    sscanf(argv[1], "%d%c%d", &x, &c, &y);
    // error checking should be here
}

int calculation(char* argv[]) {
    if (parseInput(argv) == 1) return 1;
    switch (c)
    {
    case '+':
        printf("Result: %d\n", (x+y));
        break;
    case '-':
        printf("Result: %d\n", (x-y));
        break;
    case '*':
        printf("Result: %d\n", (x*y));
        break;
    case '/':
        printf("Result: %d\n", (x/y));
        break;
        // below return value 0
    /* case '%':
        printf("Result: %d\n", (fmod(x, y)));
        break;
    case '^':
        printf("Result: %d\n", (pow(x, y)));
        break;
    } */
    return 0;
}
