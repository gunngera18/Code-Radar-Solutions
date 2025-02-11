#include <stdio.h>
int main()
{
char name[99];
int age;
char hobby[99];
scanf("%99s",&name);
scanf("%d",&age);
scanf("%99s",&hobby);
printf("Name: \n",name);
printf("Age: \n",age);
printf("Hobby: ",hobby);
    return 0;
}