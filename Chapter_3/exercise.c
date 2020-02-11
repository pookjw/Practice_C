#include <stdio.h>

int main(void){
    float a;
    printf("Enter stating temp: ");
    //scanf("%6.2f", &a);
    scanf("%f", &a);

    while (a<100){
        if ((a>98.6) && (a<100)){
            printf("%6.2f degrees F = %6.2f degrees C\n", 98.6, (98.6 - 32.0) * 5.0 / 9.0);
        }
        printf("%6.2f degrees F = %6.2f degrees C\n", a, (a - 32.0) * 5.0 / 9.0);
        
        a += 5;
    }
}