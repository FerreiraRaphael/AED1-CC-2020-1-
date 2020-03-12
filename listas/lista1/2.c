#include <stdio.h>

int main()
{
    int i = 10;
    int i2 = 9;
    int *bigger = NULL; 

    if (i > i2)
    {
        bigger = &i;
    }
    else if (i2 > i)
    {
        bigger = &i2;
    }

    printf("%p\n", bigger);
}