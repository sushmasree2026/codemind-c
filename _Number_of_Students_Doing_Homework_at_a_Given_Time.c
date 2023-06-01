#include<stdio.h>
int main()
{
    int a; 
    scanf("%d",&a);
    int arr[a]; 
    for(int i=0;i<a;i++) 
    {
        scanf("%d",&arr[i]);
    }
    int b;
    scanf("%d",&b);
    int arr1[b];
    for(int i=0;i<b;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int k,c=0;
    scanf("%d",&k); 
    for(int i=0;i<a;i++) 
    {
        if(arr[i]<=k && arr1[i]>=k)
        {
            c++;
        }
    }
    printf("%d",c);
}