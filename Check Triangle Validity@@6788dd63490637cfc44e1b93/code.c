#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first side : ");
    scanf("%d",&a)
     printf("enter the second side : ");
     scanf("%d",&b);
      printf("enter the third side : ");
      scanf("%d",&c);
      if( a>b+c || b>a+c || c>a+b)
      {
        printf("Valid");
      }
      else
      {
        printf("Invalid");
      }
      return 0;
}