#include<stdio.h>
void abba(int p,int t,int r)
{
    int si;
    si=(p*t*r)/100;
    printf("%d",si);
}
int main()
{
    int p,t,r;
    scanf("%d%d%d",&p,&t,&r);
    abba(p,t,r);
}