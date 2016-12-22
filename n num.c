#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,n,sum=0;
printf("enter the numbers");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("the sum is %d",sum);
getch();
}
