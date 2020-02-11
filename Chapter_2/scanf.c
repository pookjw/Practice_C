#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    c = a + b;
    printf("%d + %d = %d\n", a, b, c);

    float d, e, f;
    printf("Enter the first value: ");
    scanf("%f", &d);
    printf("Enter the second value: ");
    scanf("%f", &e);
    f = d + e;
    printf("%f + %f = %f\n", d, e ,f);

    return 0;
}