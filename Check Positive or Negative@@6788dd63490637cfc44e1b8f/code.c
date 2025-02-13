#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a!=0)
    {
        if(a>0)
        {
            printf("Positive");

        }
        else
        {
            printf("Negative");
        }
    }
    else
    {
        printf("Zero");
    }
}