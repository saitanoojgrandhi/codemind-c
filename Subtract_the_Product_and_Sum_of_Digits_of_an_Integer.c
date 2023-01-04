#include<stdio.h>
int main()
{
    int n,res,sum=0,product=1;
    scanf("%d",&n);
    while(n>0)
    {
        res=n%10;
        n=n/10;
        sum=sum+res;
        product=product*res;
    }
    printf("%d",(product-sum));
}