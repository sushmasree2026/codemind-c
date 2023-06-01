#include<stdio.h>
void bubble(int *a,int n){
    int i,j,temp,s=0,p;
    for(p=1;p<n;p++){
        for(i=0;i<n-p;i++){
            j=i+1;
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int n; 
    scanf("%d",&n); 
    int a[n],i;
    for(i=0;i<n;i++) { 
        scanf("%d",&a[i]); 
        if(a[i]<0)
        {
            a[i]=a[i]*-1;
        }
    }
    bubble(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]*a[i]);
    }
}