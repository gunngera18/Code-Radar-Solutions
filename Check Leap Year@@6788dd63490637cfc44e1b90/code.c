#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
     if(y%100==0)
    {
        if(y%400==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
    }
    if(y%4==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}