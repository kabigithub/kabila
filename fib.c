#include<stdio.h>

int main()
{
    int a=0,b=1,c,i,n;

    printf("Enter how many elements?");
    scanf("%d",&n);
    printf("\n%d %d",a,b);

    for(i=2;i<n;++i)
    {
        c=a+b;
        printf("fibonacci series",c
        a=b;
        b=c;
    }

    return 0;
}
