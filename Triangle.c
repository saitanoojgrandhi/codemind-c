#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&a==c&&b==c)
    {
        printf("Equilateral triangle");
    }
    else if(a==b||a==c||b==c)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }
}