#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,temp=0;
printf("enter the numbers");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("a=%d\n b=%d",a,b);
getch();
}
