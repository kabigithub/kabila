#include<stdio.h>
void main()
{
int n,org,rev=0,rem,val=0;
printf("enter the number");
scanf("%d",&n);
org=n;
while(org!=0)
{
rem=org%10;
val=(rev*10);
printf("rem:%d val:%d\n",rem,val);
rev=rem+val;
org=org/10;
printf("%d",rev);
}
//printf("%d",rev);
if(n==rev)
{
printf("the number is palindrome ");
}
else
{
printf("the number is not an palindrome");
}
getch();
}
