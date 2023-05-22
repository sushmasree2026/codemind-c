#include<stdio.h>
int prime(int n)
{
    int i;
    if(n==1)
    {
        return 0; 
    } 
    for(i=2;i<n/2;i++) 
    {
        if(n%i==0) 
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++) 
    {
        if(n%i==0)
        {
            if(prime(i))
            {
                printf("%d ",i);
                c++;
            }
        }
    }
    if(c==0) 
    {
        printf("-1");
    }
}