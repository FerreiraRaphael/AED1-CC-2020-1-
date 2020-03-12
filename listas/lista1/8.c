#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    float *array = malloc(sizeof(float) * 10);
    for(i = 0; i < 10; i++) {
        array[i] = 10.2222;
    }

    for(i = 0; i < 10; i++) {
        printf("%p\n", &array[i]);
    }
}