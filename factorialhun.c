#include<stdio.h>
void main()
{
int i,f=1,n;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("factorial of a number is %d",f);
getch();
}
