#include <stdio.h>

int main()
{
    int i;
    int i2;
    int *bigger;
    
    scanf("%d", &i);
    scanf("%d", &i2);

    if (&i > &i2)
    {
        bigger = &i;
    }
    else if (&i2 > &i)
    {
        bigger = &i2;
    }

    printf("%p\n", bigger);
}