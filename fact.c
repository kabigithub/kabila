#include<stdio.h>
void main()
{
int i,num,f=1;
printf("enter a number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
f=f*i;
}
printf("the factorial of a number is%d",f);
getch();
}
