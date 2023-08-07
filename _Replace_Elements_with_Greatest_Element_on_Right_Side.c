#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int max=0;
        for(int j=i+1;j<n;j++)
        {
            if(max<a[j])
            {
                max=a[j];
            }
        }
        printf("%d ",max);
    }
    printf("-1");
}