


#include<stdio.h>

void main()
{
int year;
printf("enter the year");
scanf("%d",&year);
if((year%400==0)||(year%4==0))
{
printf("%d leap year",year);
}
else
{
printf("%d not a leap year",year);
}
getch();
}
