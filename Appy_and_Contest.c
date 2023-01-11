#include<stdio.h>
int main()
{
    int t,count;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b,k;
        scanf("%d %d %d %d",&n,&a,&b,&k);
        if(a%b==0)
        count=n/b-n/a;
        else if(b%a==0)
        count=n/a-n/b;
        else
        count=n/a+n/b-2*(n/(a*b));
        if(count>=k)
        printf("Win
");
        else
        printf("Lose
");
    }
}