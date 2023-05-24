#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n); 
    int a[n];
    for(int i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
    int x,v,temp;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        temp=a[0]; a[0]=a[n-1];
        for(int j=1;j<n;j++)
        {
            v=a[j];
            a[j]=temp; 
            temp=v;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}