#include <stdio.h>
int main(void)
{
    double celsiuss, fahr;
    printf("enter fahr\n");
    scanf("fahr=%lf",&fahr);
    celsiuss = 5 * (fahr - 32) / 9;
    printf("celsius is %lf\n", celsiuss);
    return 0;
}
