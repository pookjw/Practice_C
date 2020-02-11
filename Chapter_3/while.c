#include <stdio.h>

int main(void) {

    int a = 1;
    int b = 6;

    while (a < b){
        printf("%d\n", a);
        a += 1;
    } // 1 2 3 4 5

    int x = 1;

    do {
        printf("%d\n", x);
        x += 1;
    }
    while (x < 10); // 1, 2, 3, 4, 5, 6, 7, 8, 9

    return 0;
}