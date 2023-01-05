#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for (i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for (i=0; i<a; i++)
    {
        if (arr[i]<a)
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}