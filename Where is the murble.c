#include <stdio.h>
int main()
{
    int num, rnd, tst =0, tmp, tmp2, i, j, cnt;
    int ara[10001];
    while(1)
    {
        for(i=0; i<10001; i++) ara[i]=0;
        scanf("%d%d", &num, &rnd);
        if(num == 0 && rnd == 0) break;
        for(i=0; i<num; i++)
        {
            scanf("%d", &tmp);
            ara[tmp]++;
        }
        printf("CASE# %d:\n", ++tst);
        for(i=1; i<=rnd; i++)
        {
            scanf("%d", &tmp2);
            if(ara[tmp2]>0)
            {
                for(j=1, cnt=1; j<tmp2; j++) cnt += ara[j];
                printf("%d found at %d\n", tmp2, cnt);
            }
            else printf("%d not found\n", tmp2);
        }
    }
    return 0;
}
