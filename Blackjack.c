#include<stdio.h>
void bj(int a,int b)
{
    int c=21-(a+b);
    if(c>10)
    {
        printf("-1");
    }
    else
    {
        printf("%d",c);
    }
}
int main()  
{
    int a,b;
    scanf("%d%d",&a,&b);
    bj(a,b);
}