#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j,count=0,c=0;
    if (a>=1 && a<=10000)
    {
        for (i=1; i<=a; i++)
        {
            c=0;
            if (a%i==0)
            {
                for (j=1; j<=i; j++)
                {
                    if (i%j==0)
                    {
                        c+=1;
                    }
                }
                if (c==2)
                {
                    continue;
                }
                else
                {
                    count+=1;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}