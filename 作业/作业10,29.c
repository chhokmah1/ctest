#include <stdio.h>
int main()
{
  int electricit;
  float cost;
  printf("enter your electricit=");
  scanf("%d",&electricit);
  if(electricit<=50)
  {
    cost=0.53*electricit;
  }
  else
  {
    cost=0.53*50+0.25*(cost-50);
  }
  
  printf("your cost is %.2fyuan\n",cost);

  return 0;
}
