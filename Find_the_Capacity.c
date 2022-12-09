#include<stdio.h>
int main()
{
    int c,ckb,s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    c=2*s*t*b*512;
    ckb=c/1024;
    printf("%dKB",ckb);
}