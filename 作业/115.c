#include<stdio.h>
int main()
{
    int wait,i;
    float cost=0,distance;
    printf("enter your distance wait=");
    scanf("%f%d",&distance,&wait);
    if(distance<=3)
    {
        cost=10;
    }
    else if(distance>3&&distance<=13)
    {
        cost=10+(distance-3)*2;
    }
    else
    {
        cost=30+(distance-13)*3;
    }

       cost+=(wait/5)*2;
    
    printf("cost is %.0fyuan",cost);

    return 0;

}

