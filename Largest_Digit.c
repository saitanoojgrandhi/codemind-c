#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int max=0,b;
    while (a>0)
    {
        b=a%10;
        if (b>max)
           max=b;
        a=a/10;
    }
    printf("%d",max);
    return 0;
}