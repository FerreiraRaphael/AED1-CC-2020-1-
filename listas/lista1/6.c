#include <stdio.h>

int doubleSum(int *i,  int *i2) {
    *i = 2 * *i;
    *i2 = 2 * *i2;

    return *i + *i2;
}

int main()
{
    int i;
    int i2;
    
    scanf("%d", &i);
    scanf("%d", &i2);

    int r = doubleSum(&i, &i2);

    printf("%d\n%d\n%d\n", i, i2, r);
}