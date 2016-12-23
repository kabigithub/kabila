#include<stdio.h>
void main()
{
int i,m;
printf("enter the number");
scanf("%d",&m);
for(i=1;i<=m;i++)
{
if(i%2==0)
{
printf("%d even number",i);
}
}
getch();
}
