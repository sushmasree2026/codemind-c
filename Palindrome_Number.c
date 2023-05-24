#include<stdio.h>
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        int n,r,sum=0,temp;    
        scanf("%d",&n);    
        temp=n;    
        while(n>0)    
        {    
            r=n%10;    
            sum=(sum*10)+r;    
            n=n/10;    
        }    
        if(temp==sum)    
            printf("True
");    
        else    
            printf("False
");   
    }
}