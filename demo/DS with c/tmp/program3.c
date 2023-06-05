#include <stdio.h>
int main()
{
    int arr[5], arr1[5], arr2[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr[i] + arr1[i];
        printf("%d\n", arr2[i]);
    }
}