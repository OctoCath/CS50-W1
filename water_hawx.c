#include<stdio.h>
#include<limits.h>
int main(void) {
    unsigned int x;
    do {
        printf("Minutes: ");
        scanf("%u", &x);

        if(x <= UINT_MAX/12) break;

        puts("It will be overflow!!!");
    } while(1);
    printf("Bottles: %d\n", x*12);
}

