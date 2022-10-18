#include<stdio.h>
int main()
{
    int m = 9;
    int i;

    for (i = 1; i <= 10; i = i + 1)
    {
        printf("%d X %d = %d\n", m, i, m*i);
    }
    return 0;
}
