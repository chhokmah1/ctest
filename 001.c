#include<stdio.h>
#include<math.h>
int main()
{
    int number,sum=0,term,n,i=1;
    printf("enter number\n");
    scanf("%d",&number);
    i=number;
    while (number>0)

    {
        term=number%10;
        sum+=pow(term,3);
        number/=10;
    }
       
      

   if (sum==i)
    {
        printf("YSE");
    }
    else 
    {
        printf("NO");
    }

    return 0;

}

