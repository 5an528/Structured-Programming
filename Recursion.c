#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=fact(n);

    printf("%d",sum);
    return 0;
}

int fact(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        int f=1;
        for (int i=1;i<=n;i++)
        {
            f=f*i;
        }
        return f;
    }
}





