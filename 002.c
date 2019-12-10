#include<stdio.h>
#define N 10
int main()
{
    int a[N]={0},i  , j , m ,max;
    for(j=0;j<N;j++){
    printf ("enter a[%d]",j);
    scanf ("%d",&m);
    a [j] = m;
    }
    max = Max (a , N);
    printf ("max is %d ",max);
    return 0;
}


int Max (int a[] , int n)
{
    int max , i ;
    max=a[0];
    for (i=0;i<n-1;i++){
    if(max<a[i+1])
    max = a[i+1];
    }
    return max;
}
