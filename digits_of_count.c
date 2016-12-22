#include<stdio.h>

void main()
{
int i,n,count=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
    //digit=n%10;
    count++;
    n=n/10;
}
printf("counts of an integer is %d",count);
getch();
}
