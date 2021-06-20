#include <stdio.h>
int main()
{
    int i,j,k;

    printf("Enter Number \n");
    scanf("%d",&k);


    for(i=1; i<=k; i++)

    {

        for(j=1; j<=k-i; j++)

            {
            printf(" ");
            }

        for(j=1; j<=2*i-1; j++)

            {
            printf("*");
            }

        printf("\n");

    }

    for(i=1; i<k; i++)

    {

        for(j=1; j<=i; j++)

            {
            printf(" ");
            }

        for(j=2*k-2*i-1; j>=1; j--)


            {
                printf("*");
            }

        printf("\n");

    }

    return(0);

}
