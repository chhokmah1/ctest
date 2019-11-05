#include<stdio.h>
int main()
{
    int wait,max,i;
    float cost,distance;
    printf("enter your distance wait=");
    scanf("%f,%f",&distance,&wait);
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

    if(wait>5)
    {
       cost+=(wait/5)*2;
    }
    
    cost+=0.5;
    printf("cost is %dyuan",cost);
    return 0;

}

