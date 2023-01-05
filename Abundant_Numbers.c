#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sum=0,i;
    for (i=1; i<a; i++)
    {
        if (a%i==0)
           sum+=i;
    }
    if (sum>a)
        printf("True");
    else
        printf("False");
    return 0;
}