#include<stdio.h>
void main()
{
int i;
char n[150];
printf("enter a number");
gets(n);
i=atoi(n);
printf("the value entered is %d",i);
getch();
}
