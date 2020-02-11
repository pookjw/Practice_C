#include <stdio.h>

int main(void){
    int x = 1;

    for (x = 1; x < 10; x++){
        printf("%d\n", x);
    }

    int a, b;
    for (a=1, b=6; a<b; a++){
        printf("%d\n", a);
    }
}