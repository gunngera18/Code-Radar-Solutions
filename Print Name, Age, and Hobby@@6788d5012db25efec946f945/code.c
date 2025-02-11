#include <stdio.h>
int main()
{
char name[99];
int age;
char hobby[99];
scanf("%99s",&name);
scanf("%d",&age);
scanf("%99s",&hobby);
printf("Name: %s \n",name);
printf("Age: %d \n",age);
printf("Hobby: %s ",hobby);
    return 0;
}