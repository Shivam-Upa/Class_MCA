#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int tm;
    float a;
    scanf("%d", &num);
    a = sqrt((double)num);
    tm = a;
    if (tm == a)
        printf("%d is a perfect square.", num);
    else
        printf("%d is not a perfect square.", num);

    return 0;
}