#include<stdio.h>
void abba(int r)
{
    float a=3.14*r*r;
    printf("%.2f",a);
}
int main()
{
    int r;
    scanf("%d",&r);
    abba(r);
}