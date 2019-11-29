#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,i1=0;
    for ( i = 2; i <=100; i++)
    {
        k=(int)sqrt( i) ;
    for(j=2;j<=k;j++){
            if(i%j==0)
            break;       
        }

         if(j>k){
            printf("%4d ",i);
            i1++;
            if(i1%10==0){
             printf("\n");
            }
         }
    }

    return 0;
}

