#include<stdio.h>
int main()
{
    char cl;
    scanf("%c",&cl);
    if(cl=='V')
    {
        printf("Violet");
    }
    else if(cl=='I')
    {
        printf("Indigo");
    }
    else if(cl=='B')
    {
        printf("Blue");
    }
    else if(cl=='G')
    {
        printf("Green");
    }
    else if(cl=='Y')
    {
        printf("Yellow");
    }
    else if(cl=='O')
    {
        printf("Orange");
    }
    else if(cl=='R')
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
}