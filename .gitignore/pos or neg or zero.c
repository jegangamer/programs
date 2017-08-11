#include<stdio.h>
int main()
{
int number;
scanf("%d",&number);
if(number>0)
{
printf("given number is positive");
}
else if(number<0)
{
printf("given number is negative");
}
else
{
printf("given number is zero");
}
return 0;
}
