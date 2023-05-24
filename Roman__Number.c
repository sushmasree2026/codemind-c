#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * roman(int num)
{
    char* chr = (char*)malloc(sizeof(char));
    int i = 0;
    while(num != 0)
    {
        if(num/1000>0||num==1000)
        {
            chr[i++] = 'M';
            num -= 1000;
        }
        else if(num/900>0||num==900)
        {
            chr[i++] = 'C';
            chr[i++] = 'M';
            num -= 900;
        }
        else if(num/500>0||num==500)
        {
            chr[i++] = 'D';
            num -= 500;
        }
        else if(num/400>0||num==400)
        {
            chr[i++] = 'C';
            chr[i++] = 'D';
            num -= 400;
        }
        else if(num/100>0||num==100)
        {
            chr[i++] = 'C';
            num -= 100;
        }
        else if(num/90>0||num==90)
        {
            chr[i++] = 'X';
            chr[i++] = 'C';
            num -= 90;
        }
        else if(num/50>0||num==50)
        {
            chr[i++] = 'L';
            num -= 50;
        }
        else if(num/40>0||num==40)
        {
            chr[i++] = 'X';
            chr[i++] = 'L';
            num -= 40;
        }
        else if(num/10>0||num==10)
        {
            chr[i++] = 'X';
            num -= 10;
        }
        else if(num/9>0||num==9)
        {
            chr[i++] = 'I';
            chr[i++] = 'X';
            num -= 9;
        }
        else if(num/5>0||num==5)
        {
            chr[i++] = 'V';
            num -= 5;
        }
        else if(num/4>0||num==4)
        {
            chr[i++] = 'I';
            chr[i++] = 'V';
            num -= 4;
        }
        else if(num == 3)
        {
            chr[i++] = 'I';
            chr[i++] = 'I';
            chr[i++] = 'I';
            num -= 3;
        }
        else if(num == 2)
        {
            chr[i++] = 'I';
            chr[i++] = 'I';
            num -= 2;
        }
        else if(num == 1)
        {
            chr[i++] = 'I';
            num -= 1;
        }
    }
    chr[i] = NULL;
    return chr;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%s",roman(n));
}