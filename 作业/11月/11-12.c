#include<stdio.h>
int main()
{
    int i=0,choice;
    do
    {
    printf("[1]apples\n[2]pears\n[3]prange\n[4]grapes\n[0]Exit\n");
    printf("neter choice");
    scanf("%d",&choice);
    if(choice==0){
      break;
    }
    
    switch(choice)
     {
      
      case 1:printf("price=3.0\n");break;
      case 2:printf("price=2.5\n");break;
      case 3:printf("price=4.1\n");break;
      case 4:printf("price=10.2\n");break;
      default:printf("price=0\n");break;
     }
     i++;
    }
    while (i<=5);
    
    printf("Thank");
    return 0;

}
