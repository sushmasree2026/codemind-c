#include <stdio.h>
#include <string.h> 
int main()
{
    char s[1000],c; 
    int i,count=0;
    fgets(s,sizeof(s),stdin);
    c=getchar();
    for(i=0;s[i];i++)
    {
        if(s[i]==c)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",count);
    }
    return 0;
}