#include <stdio.h>

int sum(int *i,  int *i2) {
    *i = *i + *i2;

    return *i;
}

int main()
{
    int i;
    int i2;
    
    scanf("%d", &i);
    scanf("%d", &i2);

    int r = sum(&i, &i2);

    printf("%d\n%d\n%d\n", i, i2, r);
}