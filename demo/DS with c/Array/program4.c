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

        printf("%d\n", arr[49 - i]);
    }
    return 0;
}