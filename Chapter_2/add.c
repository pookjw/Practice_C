#include <stdio.h>

int main(void){
    int a, b, c;
    a = 5;
    b = 7;
    c = a + b;
    printf("%d + %d = %d\n", a, b, c);
    printf("%d + %d = %d\n", a, b, a + b);

    printf("The temperature is ");
    printf("%d", b);
    printf(" degrees\n");
    printf("The temperature is %d degrees\n", b);

    char str[] = "Hello!";
    printf("%s\n", str);

}