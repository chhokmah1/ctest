#include<stdio.h>
int main()
{
    double chick;
   int cock ,hen ,chick;
   for (cock=0;cock*5<=100;cock++)
   {
       for (hen=0;hen*3<=100;hen++)
       {
           for(chick=0;chick/3.0<=100;chick++)
           {
               if (cock*5+hen*3+chick/3.0==100&&cock+hen+chick==100)
               {
                   printf("cock=%d hen=%d chick=%.0f\n",cock,hen,chick);                  
               }
               
           }

       } 
   }
   return 0;
}
