#include <stdio.h>
int main()
{
    int arr[50];
    for (int i = 0; i < 50; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 50; i++)
    {
        if (arr[i] % 7 == 0)
        {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}