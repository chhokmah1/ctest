#include <stdio.h>
#include <math.h>
int main()
{
    int a, n, i;
    double a1, sum = 0, a2;
    printf("enter a n ");
    scanf("%d%d", &a, &n);
    for (i = 1; i <= n; i++)
    {
        a1 = a * pow(10, i - 1);
        a2 += a1;
        sum += a2;
    }
    printf("sum=%.0f\n", sum);
    return 0;
}
