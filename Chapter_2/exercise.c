#include <stdio.h>

int main(void)
{
    int g, h, i, j;
    printf("Enter the first value: ");
    scanf("%d", &g);
    printf("Enter the second value: ");
    scanf("%d", &h);
    printf("Enter the thrid value: ");
    scanf("%d", &i);
    j = g + h + i;
    printf("%d\n", j);

    return 0;
}