#include<stdio.h>
#include"string.h"
void main()
{
    int i=0;
char s[10];
printf("enter a character \n");
scanf("%s",&s);
strrev(s);
printf("\n output1 %s",s);
for(i=0;i<strlen(s);i++)
{
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='U')

       {
         printf("");
       }

else
      {

        printf(" \n %c",s[i]);

      }
}
getch();
}
