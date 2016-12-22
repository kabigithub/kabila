#include<stdio.h>
void main()
{
char c;
printf("enter the character");
scanf("%d",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
printf("character is vowel %c",c);
}
else
{
printf("character is consonant %c",c);
}
getch();
}
