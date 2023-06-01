#include<stdio.h>
int even_dig(int n)
{
    int i,rev=0,c=0;
    while (n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
        c++;
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,count=0; 
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(even_dig(a[i])%2==0)
        {
            count++;
        }
    }
    printf("%d",count);
}