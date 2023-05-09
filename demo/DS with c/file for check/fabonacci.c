#include <stdio.h>
int main()
{
    int fn = 0, s = 1, n = 0;
    while (n < 100)
    {
        printf("%d ", n);
        fn = s;
        s = n;
        n = fn + s;
    }
 
 
    return 0;
}