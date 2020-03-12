#include <stdio.h>

void inverse(int *i,  int *i2) {
    int temp = *i;
    *i = *i2;
    *i2 = temp;
}

int main()
{
    int i;
    int i2;
    
    scanf("%d", &i);
    scanf("%d", &i2);

    inverse(&i, &i2);

    printf("%d\n%d\n", i, i2);
}