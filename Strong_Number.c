#include<stdio.h>
int main()
{
    int n,i,fac,r,s=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        i=1,fac=1;
        r=n%10;
        while(i<=r)
        {
            fac=fac*i;
            i++;
        }
        s=s+fac;
        n=n/10;
    }
    if(s==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}