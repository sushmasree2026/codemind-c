#include<stdio.h>
int pal(int n)
{
    int r=0;
    while(n>0)
    {
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
int main()
{
    int x,y,i,r;
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
        if(i==pal(i)) 
        {
            printf("%d ",i);
        }
    }
}