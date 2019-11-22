#include<stdio.h>
#include<math.h>
int main()
{
    int n=1;
    double sum=0;
    do
    {
        sum+=pow(-1,n+1)*1.0/(2*n-1);
        n++;       
    }
    while(1.0/(2*(n-1)-1)>=0.0001);
    sum*=4;
    printf("pi=%.4f",sum);
    return 0;
}

