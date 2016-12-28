#include<stdio.h>
#include<string.h>
void main()
{
char s[20],temp;
int i;
printf("enter a string \n ");
scanf("%s",s);
for(i=0;i<strlen(s);i=i+2)
{



temp=s[i];
s[i]=s[i+1];
s[i+1]=temp;

}
printf("swapped string is%s",s);

getch();
}
