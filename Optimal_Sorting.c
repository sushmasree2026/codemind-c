#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int k=0;k<x;k++)
    {
        int n,c=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=1;i<n;i++)
        {
            if(a[i-1]>a[i])
            {
                c++;
            }
        }
        if(c==0) 
        {
            printf("%d",c);
        }
        else
        {
            int min=a[0],max=a[0];
            for(int i=0;i<n;i++)
            {
                if(min>a[i])
                {
                    min=a[i];
                }
                if(max<a[i])
                {
                    max=a[i];
                }
            }
            printf("%d
",max-min);
        }
    }
}