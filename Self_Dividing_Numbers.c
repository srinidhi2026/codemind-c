#include<stdio.h>
int main()
{
    int a,b,c,i,j,x=0,y=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        x=0;
        y=0;
        for(j=i;j>0;j=j/10)
        {
            c=j%10;
            x++;
            if(c!=0)
            {
                if(i%c==0)
                {
                    y++;
                }
            }
        }
        if(x==y)
        printf("%d ",i);
    }
}