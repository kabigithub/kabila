#include<stdio.h>
void main()
{
int f=1,n,i=0;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("factorial of a number is %d",f);
getch();
}
