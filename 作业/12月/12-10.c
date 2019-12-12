#include <stdio.h>
#include <math.h>
#define N 5
int fun(int a[],int t);

int main()
{
   int x[N];
   int i;
   printf("enter number \n");
   for ( i = 0 ; i < N ; i ++)
   scanf ("%d",&x[i]);
    i = fun(x,N);
    printf("min is %d\n",i);
      return 0;
}

int fun(int a[],int t)
{
 int i,min=0;
  for(i=0;i<t;i++)
    min=a[0];
  for(i=0;i<t;i++)
    if(min > a[i])
     min=a[i];    
  
   return min;
}
