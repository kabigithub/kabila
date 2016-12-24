#include<stdio.h>
void main()
{
int i,n,f=0,m,k,c;
printf("enter a number");
scanf("%d",&c);
printf("enter m number");
scanf("%d",&m);
for(k=c;k<=m;k++)
    {
 n=k;

if((n%i==1)||(n%i==2))
    printf("%d",n);
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
printf("%d",n);

    }}
getch();
}
