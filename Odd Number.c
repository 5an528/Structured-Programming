#include<stdio.h>
int main ()
{
    int i,n,sum=0;
    printf("Input number of the terms:");
    scanf("%d",&n);
    printf("\nThe Odd numbers are:\n");
    for(i=1;i<=n+n;i+=2)
    {
        printf("%d ",i);
        sum=sum+i;

    }
    printf("\nThe Sum of Odd Natural Number up to %d terms:%d\n",n,sum);
    return 0;
}
