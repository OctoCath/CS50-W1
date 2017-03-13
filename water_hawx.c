#include<stdio.h>
int main(void) {
    int x;
    do {
        printf("Minutes: ");
        scanf("%d", &x);
    } while(x < 0);
    printf("Bottles: %d\n", x*12);
}

