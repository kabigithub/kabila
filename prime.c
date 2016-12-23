#include<stdio.h>
void main()
{
int i,n,f=0;
printf("enter a number");
scanf("%d",&n);
if((n%i==1)||(n%i==2))
    printf("Number is prime");
else
{

for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
    f=1;
break;
}}
if(f!=1)
printf("prime");
else
    printf("not a prime");

}
getch();
}
