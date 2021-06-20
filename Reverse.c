#include <stdio.h>
int main()
{
    int n, r = 0, m;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        m = n%10;
        r = r*10 + m;
        n /= 10;
    }

    printf("Reversed Number = %d", r);

    return 0;
}
