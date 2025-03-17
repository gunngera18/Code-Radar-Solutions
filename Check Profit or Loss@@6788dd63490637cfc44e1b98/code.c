#include<stdio.h>
int main()
{
int costprice, sellingprice;
scanf("%d%d",&costprice,&sellingprice);
if ( sellingprice > costprice )
{
    printf("Profit");
}
 else if( costprice > sellingprice)
{
    printf("Loss");
}
else if ( sellingprice > costprice )
{
    printf("Profit");
}
else 
{
    printf("No Profit No Loss");
}
}