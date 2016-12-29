#include<stdio.h>
void main()
{
int i,sum=0,odd=0;
for(i=1;i<=15;i++)
{
sum=sum+i;
}printf("sum=%d",sum);
for(i=15;i<=45;i++)
{
while(i%2!=0)
{
odd=odd+i;
i++;
}}
printf("\nodd=%d",odd);
getch();
}


