#include<stdio.h>
main ()
{
    int i,n,product=1,sum=0;
    printf ("enter n");
    scanf ("%d",&n);
    for (i=1; i<=n; i++)
    {
        product*=i ;
        sum+=product ;
    }
    printf("sum=%d",sum);
    return 0;
    
}
