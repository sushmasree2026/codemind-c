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
    int f,val;
    for(int i=0;i<n;i+=2)
    {
        f=a[i];
        val=a[i+1];
        for(int j=0;j<f;j++)
        {
            printf("%d ",val);
        }
    }
}