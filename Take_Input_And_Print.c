#include<stdio.h>
int main()
{
    char s[100];
    fgets(s,sizeof(s),stdin);
    printf("%s",s);
    return 0;
}