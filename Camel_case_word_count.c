#include<stdio.h>
#include<string.h>
int main(){
    char s[1000000];
    scanf("%[^
]s",s);
    int l = strlen(s);
    if(s[0]>='a' && s[0]<='z'){
        int c=0;
        for(int i=0;i<l;i++){
            if(s[i]>='A'&&s[i]<='Z'){
                c++;
            }
        }
        printf("%d",c+1);
    }
    else{
        int c=0;
        for(int i=0;i<l;i++){
            if(s[i]>='A'&&s[i]<='Z'){
                c++;
            }
        }
        printf("%d",c);
    }
}