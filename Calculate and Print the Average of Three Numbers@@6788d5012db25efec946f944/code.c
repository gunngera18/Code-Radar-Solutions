#include <stdio.h>
int main()
{
int n1,n2,n3,n4;
float n5;
scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
n4=(n1+n2+n3);
n5=n4/3;
printf("Average: %.2f",n5);
}