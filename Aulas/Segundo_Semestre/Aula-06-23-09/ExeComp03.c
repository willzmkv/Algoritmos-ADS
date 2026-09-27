#include <stdio.h>

int main()
{
    int array[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    printf("Valores do vetor:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("\n");

    return 0;
}