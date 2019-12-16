#include<stdio.h>
#define N 5
int p;
void swap (int a[] ,int n , int m);
int min ( int a[] , int j ,int n);
int main()
{
    int a[N]={0} ,i  , temp , k;
    printf("enter number\n");
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    for (k = 0; k< N ;k++) 
    if (a[k] > min(a , k , N))
    {
      swap ( a , k , p);
    } 
    
    for(i=0;i<N;i++)
    printf("%d ",a[i]);
   return 0;
}

 void swap (int a[] ,int n , int m)
 {
   int temp ;
    temp = a [n];
   a [n] = a [m];
   a [m] = temp ;
 }

int min ( int a[] , int j ,int n)
{
  int min , i  ;
  min = a[j];
  for(i= j;i < n ;i++)
  if (min > a[i]){
  min = a[i] ;
  p = i;}
  return min;
}
