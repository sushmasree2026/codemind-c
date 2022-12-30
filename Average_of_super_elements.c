#include<stdio.h>
int main()
{
    int n,i,j;
    float r=0,s=0,c=0;
    scanf("%d",&n);
    float a[n];
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int t=0,x=a[i];
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                t++;
            }
        }
        if(x==t)
        {
            s=s+a[i];
            c++;
            a[i]=0;
        }
    }
    if(c==0)
    {
        printf("%d",-1);
    }
    else
    {
        r=s/c;
        printf("%0.2f",r);
    }
}