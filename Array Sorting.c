#include <stdio.h>
int main()
{
    int a1[100];
    int n, i, j, t;
    scanf("%d", &n);
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
        {
            printf("element - %d : ",i);
            scanf("%d",&a1[i]);
            }
            for(i=0; i<n; i++)
                {
                    for(j=i+1; j<n; j++)
                    {
                        if(a1[j] <a1[i])
                        {
                            t = a1[i];
            a1[i] = a1[j];
            a1[j] = t;
             }
            }
        }
            printf("\nElements of array in sorted ascending order:\n");
            for(i=0; i<n; i++)
                {
                    printf("%d ", a1[i]);
            }
            printf("\n\n");
            return 0;
}
