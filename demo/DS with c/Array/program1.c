#include <stdio.h>
int main()
{
    float arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%f\n", arr[i]);
    }
}