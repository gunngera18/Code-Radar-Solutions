#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the first side : ");
     printf("enter the second side : ");
      printf("enter the third side : ");
      scanf("%d%d%d",&a,&b,&c);
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