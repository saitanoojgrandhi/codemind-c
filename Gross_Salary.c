#include<stdio.h>
int main()
{
    int da,bs,hra;
    scanf("%d",&bs);
    float gs;
    if(bs<=10000)
    {
        da=bs*0.8;
        hra=bs*0.2;
    }
    else if(bs<=20000)
    {
        da=bs*0.9;
        hra=bs*0.25;
    }
    else if(bs>20000)
    {
        da=bs*0.95;
        hra=bs*0.3;
    }
    gs=bs+hra+da;
    printf("%.2f",gs);
}