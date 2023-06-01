#include<stdio.h>
int main()
{
    int n,arr[2000],sum,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=1;j<=n;j++) 
        {
            if(arr[j]<arr[i]) 
            {
                sum++;
            }
        }
        printf("%d ",sum);
    }
    return 0;
}