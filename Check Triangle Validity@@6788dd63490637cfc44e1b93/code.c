#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first side : \n");
    scanf("%d",&a);
     printf("enter the second side : \n ");
     scanf("%d",&b);
      printf("enter the third side : \n ");
      scanf("%d",&c);
      if( a + b > c && a + c > b && b + c > a)
      {
        printf("Valid");
      }
      else
      {
        printf("Invalid");
      }
      return 0;
}