#include <stdio.h>

int main(void){
    int b;
    printf("Enter a value: ");
    scanf("%d", &b);
    if (b<0) {
        printf("The value is negative\n");
    } else if ( b == 0 ) {
        printf("The value is zero\n");
    }

    int x = 3, y;
    y = 4;

    if ((x==y) && (x>y)){

    } else {
        printf("Hi!\n");
    }

    if (x){
        printf("Hi!2\n");
    } // No error even x is not Boolean type. If int value is 0, false.

    int q = 0;
    int h = 3;

    if (q = h) {
        printf("Hi!3\n");
    }
    printf("%d\n", q); // 3

    if (q == h) {
        printf("true!\n");
    }

}