#include<stdio.h>
#include<math.h>
int main()
{
    double sum=0,n=1;
    while(1.0/(2*n-1)>=0.0001)
    {
        sum=sum+1.0/(2*n-1)*pow(-1,n+1);
        n++;
    }
    
    sum*=4;
    printf("pi=%.4f",sum);
    return 0;
}

