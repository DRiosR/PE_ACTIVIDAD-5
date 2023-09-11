#include <stdio.h>
int main()
{
    int n, i;
    n = 5;
    int sum[11];
    for (i = 1; i <= 10; i++)
    {
        sum[i] = n * i;
        printf("%d   %d * %d=%d\n",i , n, i, sum[i]);
    }
    return 0;
}