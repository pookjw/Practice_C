#include <stdio.h>

#define MAX 10
int b[MAX];
int rand_seed = 10;

int rand(void){
    rand_seed = rand_seed * 1103515245 + 12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}

int main(void){
    int a[5];
    for (int i=0;i<5;i++){a[i]=0;}

    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());

    printf("\n");

    for (int i=0; i<MAX; i++){
        b[i] = rand();
    }

    int t;

    // bubble sort the array
    for (int x=0; x<MAX-1; x++){
        for (int y=0; y<MAX-x-1; y++){
            if (b[y] > b[y+1]){
                t = b[y];
                b[y] = b[y+1];
                b[y+1] = t;
            }
        }
    }

    for (int i=0; i<MAX; i++){
        printf("%d\n", b[i]);
    }
}