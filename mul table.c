#include<stdio.h>
void main()
{
int n,i;
printf("******multiplication table******");
printf("\n enter n number");
scanf("%d",&n);
for(i=0;i<=10;i++)
{
printf("%d*%d=%d \n",i,n,i*n);
}
getch();
}
