#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    float bill,tb,sr;
    if(n<200)
    {
        bill=n*1.20;
    }
    else if(n>=200&&n<=400)
    {
        bill=n*1.50;
    }
    else if(n>=400&&n<=600)
    {
        bill=n*1.80;
    }
    else
    {
        bill=n*2.00;
    }
    if(bill>=400)
    {
        sr=bill*0.15;
        tb=bill+sr;
        printf("%0.2f",tb);
    }
    else
    {
        tb=bill+100;
        printf("%0.2f",tb);
    }
}