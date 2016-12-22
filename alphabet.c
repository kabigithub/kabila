#include<stdio.h>
void main()
{
char c;
printf("enter the alphabet");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
printf("the entered character is alphabet ");
}
else
{
printf("the entered character is not an alphabet ");
}
getch();
}
