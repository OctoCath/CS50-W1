#include<stdio.h>
int main(void) {
    int d;
    do {
        printf("Height: ");
        scanf("%d", &d);
    } while(d <= 0 ||  d > 23);
    if(d == 1) {
        puts("##");
        return 0;
    }

    int len = d+1;

    for(int i = 0; i < d; i++) {
        for(int idx = 0; idx < len;idx++) {
//            printf("%d, %d, %d; ", idx, len, len-2);
            if(idx >= len -i - 2) printf("#");
            else printf(" ");
        }
        puts("");
    }

}
