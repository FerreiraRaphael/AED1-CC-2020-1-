#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;

    float **matriz = malloc(sizeof(float) * 3);
    for(i = 0; i < 3; i++) {
        matriz[i] = malloc(sizeof(float) * 3);
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            matriz[j][i] = 10.2222;
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%p\n", &matriz[i][j]);
        }
    }
}