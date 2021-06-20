#include<stdio.h>
int main()
{
    int  i,j,mx,student[4][3];
    for (i=0;i<4;i++)
    {

        for (j=0;j<3;j++)
        {
            scanf("%d",&student[i][j]);
        }

    }
    for (i=0;i<4;i++)
    {

        for (j=0;j<3;j++)
        {
            printf("%d\t",student[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<3;i++)
    {
        //mx=student[0][i];
        mx=0;
        for (j=0;j<4;j++)
        {
            if(mx<student[j][i])
            {
                mx=student[j][i];
            }

        }
        printf("\n%d\n",mx);
    }
    return 0;
}


