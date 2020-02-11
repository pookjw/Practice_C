#include <stdio.h>

int main(void){
    printf("temp conversion\n");
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

    //

    printf("lb(pounds) to kg\n");
    float b;
    printf("Enter lb: ");
    scanf("%f", &b);
    printf("Result: %fkg\n", b / 45359237E-7);

    //

    printf("miles to kilometers\n");
    float c;
    printf("Enter miles: ");
    scanf("%f", &c);
    printf("Result: %fkm\n", c / 62137E-5);
}