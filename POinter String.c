#include<stdio.h>
#include<string.h>


char *getString()
{
    char *str1,*str2;
    int size;

    printf("Input String 1 = ");
    scanf("%s", &str1);
    printf("\nInput String 2 = ");
    scanf("%s", &str2);

    char *str = (char *)malloc(sizeof(char)*sizeof(str1));

    /*if(sizeof(str1)==sizeof(str2))
    {
        int j = 0;
        for(int i = 0; i < sizeof(str1)*2; i++)
        {
            *(str+j)=*(str1+i);
            j++;
            *(str+j)=*(str2+i);
            j++;
        }
    }*/
    *(str+0)=*(str1+0);

    return str;
}

int main()
{
    printf("Output String = %s", getString());
    getchar();
    return 0;
}
