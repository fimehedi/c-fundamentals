#include <stdio.h>

int main()
{
    int n, sum;

    printf("N = ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("Sum = %d\n", sum);

    return 0;
}