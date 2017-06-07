#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,n,large;
printf("enter the numbers");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
large=a[0];
for(i=1;i<n;i++)
{
if(large<a[i])
{

    large=a[i];
}
}
printf("large=%d",large);
return 0;

getch();
}
