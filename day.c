#include<stdio.h>
void main()
{
char day[100];
printf("enter the day \n ");
scanf("%s",&day);
if(strcmp(day,"sunday")==0)
printf("\n  true ");
else
printf("\nfalse");
getch();
}
