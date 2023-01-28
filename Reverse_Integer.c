#include<stdio.h>
int main()
{
    int n,q=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        q=q*10+r;
        n=n/10;
    }
    printf("%d",q);
}