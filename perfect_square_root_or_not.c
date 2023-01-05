#include<stdio.h>
int main()
{
    int a,i,n=0;
    scanf("%d",&a);
    for (i=1; i<=a; i++)
    {
        if (i*i==a)
        {
            n=1;
            break;
        }
    }
    if (n==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}