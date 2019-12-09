
#include <stdio.h>

int draw(int n)
{ 
  int i,j,k,r,m;

  for(i=1; i<=n;i++)
  {
      for(r=1;r<=2;r++){
    for (j=i;j>1;j--)
    printf(" "); 
    printf("w");
    for(k=1;k<=2*(n-i);k++)
    printf(" ");
    printf("w");
    for(m=1;m<i;m++)
    printf(" ");
      }
      printf("\n");
  }
  
}


int main()
{
  int n;
  printf ("enter n");
  scanf("%d",&n);
  draw(n);
}

