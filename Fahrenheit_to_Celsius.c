#include<stdio.h>
void abba(float f)
{
    float c=(f-32)*5/9;
    printf("%.2f",c);
}
int main()
{
    float f;
    scanf("%f",&f);
    abba(f);
}