#include <stdio.h>

int main(void){
    int a = 0;
    while ( a <= 100 ){
        printf("%4d degrees F = %4d degrees C\n", a, (a-32)*5/9);
        a += 10;
    }

    float b = 0, c = -1;
    while (b<=200){
        if ( (b>98.6) && (c<98.6) ){
            printf("***%6.2f degrees F = %6.2f degrees C\n", 98.6, (98.6 - 32.0) * 5.0 / 9.0);
        }
        printf("%6.2f degrees F = %6.2F degrees C\n", b, (b-32.0)*5.0/9.0);
        c = b;
        b += 10;
    }
    return 0;
}