#include <stdio.h>
int main()
{
    double arr[15];
    int i;
    for (int i = 0; i < 15; i++)
    {
        scanf("%lf", &arr[i]);
    }
    for (int i = 0; i < 15; i++)
    {
        printf("%lf\n", arr[i]);
    }
}
