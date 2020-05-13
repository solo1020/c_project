#include <stdio.h>

int main(void){
    int i = -1;
    float n;
    printf("Watch out! Here come a bunch of fractions!\n");
    if( i < 30){
        n = 1 / i;
    }
    printf(" %f", n);
    printf("That's all, folks!\n");

    return 0;
}