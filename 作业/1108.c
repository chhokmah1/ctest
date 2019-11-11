#include<stdio.h>
int main()
{
    int n,i,grade;
    printf("enter student number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      begin:printf("enter grade=");
      scanf("%d",&grade);
      if(grade<=100&&grade>=90)
      {
        printf("your grade is A\n");
      }
      else if(grade<=100&&grade>=80)
      {
        printf("your grade is B\n");
      }
      else if(grade<=100&&grade>=70)
      {
        printf("your grade is C\n");
      }
      else if(grade<=100&&grade>=60)
      {
        printf("your grade is D\n");
      }
      else if(grade<=100&&grade>=0)
      {
        printf("your grade is E\n");
      }
      else 
      {
        printf("your grade is error,please enter your grade again\n");
        goto begin ;
      }
    }
   return 0;
}
