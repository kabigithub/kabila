#include<stdio.h>
void main()
{
int n,sum=0,temp,r;
printf("enter a number");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
r=temp%10;
sum=sum+r*r*r;
temp=temp/10;
}
if(n==sum)
{
printf("the number is armstrong" );
}
else
{
printf("the number is not armstrong ");
}
getch();
}
