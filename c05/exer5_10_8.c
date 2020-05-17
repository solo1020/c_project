#include <stdio.h>

#define TEN 10
int main(void){
    int n = 0;
    while (n++ < TEN)
    {
        // %5d 整数占5位 空格
        printf("%5d",n);
    }
    printf("\n");
    

    return 0;
}