#include<stdio.h>
int main()
{
    int i,b,w,c,tc;
    scanf("%d%d%d%d",&i,&b,&w,&c);
    tc=c*((i+2*w)*(b+2*w)-(i*b));
    printf("%d",tc);
}