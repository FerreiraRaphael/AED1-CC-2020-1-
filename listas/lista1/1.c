#include <stdio.h>

int main() {
    int i = 10;
    double d = 10.11111111111;
    char c = 'c';

    printf("%d\n", i);
    printf("%f\n", d);
    printf("%c\n", c);

    int* ip;
    double* dp;
    char* cp;

    ip = &i;
    dp = &d;
    cp = &c;
    *ip = 12;
    *dp = 12.111111111111;
    *cp = 'd';

    printf("%d\n", i);
    printf("%f\n", d);
    printf("%c\n", c);
}