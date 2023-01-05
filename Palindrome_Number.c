#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    int i,temp,b,rev=0;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<a; i++)
    {
        rev=0;
        temp=arr[i];
        while (temp>0)
        {
            b=temp%10;
            rev=(rev*10)+b;
            temp=temp/10;
        }
        if (rev==arr[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}
