#include <stdio.h>
int main()
{
    int arr1[5], arr2[5], arr3[10];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("\n-------------------\n");
    for (int i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i];
        arr3[5 + i] = arr2[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr3[i]);
    }

    return 0;
}