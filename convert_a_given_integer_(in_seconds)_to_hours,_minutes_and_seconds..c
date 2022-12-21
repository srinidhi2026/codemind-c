#include<stdio.h>
int main()
{
    int n,a,h,m,s;
    scanf("%d",&n);
    h=n/3600;
    a=n%3600;
    m=a/60;
    s=a%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}