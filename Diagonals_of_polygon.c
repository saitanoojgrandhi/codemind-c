#include<stdio.h>
void abba(int n)
{
    int d;
    d=n*(n-3)/2;
    printf("%d",d);
}
int main()
{
    int n;
    scanf("%d",&n);
    abba(n);
}