#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *convert(int num)
{
    int i = 0;
    int Size = 1;
    char *result = (char *)malloc(Size * sizeof(char));
    while (num > 0)
    {
        Size++;
        result = (char *)realloc(result, Size * sizeof(char));
        result[i] = 'A' + (num - 1) % 26;
        num = (num - 1) / 26; i++;
    }
    result[Size - 1] = NULL;
    for (int i = 0; i <= (Size - 2) / 2; i++)
    {
        char temp = result[i];
        result[i] = result[Size - 2 - i]; 
        result[Size - 2 - i] = temp;
    }
    return result;
}
int main()
{
    int n;
    scanf("%d ",&n);
    printf("%s",convert(n));
}