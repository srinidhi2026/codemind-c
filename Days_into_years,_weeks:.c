#include<stdio.h>
int main()
{
    int n,a,c,b;
    scanf("%d",&n);
    a=n/365;
    b=n%365;
    c=b/7;
    printf("%d
%d",a,c);
}