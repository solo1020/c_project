#include <stdio.h>

#define SIZE 8

int main(int argc, char const *argv[])
{
    // double mint[10];

    // printf("enter a double num: ");
    // // scanf("%lf",mint[2]);
    // // scanf("%lf",&mint[2]);   //
    // scanf("%lf",&mint);

    // printf("the num you entered is: %f", mint[2]);
    // printf("the num mint or mint[0] you entered is: %f", mint[0]);
    
    // int by_twos[SIZE];
    // int index;
    // for(index = 1; index < SIZE; index++){
    //     by_twos[index] = 2 * index;
    // }
    // for(index = 1; index <  SIZE; index++){
    //     printf("%d ", by_twos[index]);
    // }
    // printf("\n");

    int k;
    for(k = 1, printf("%d: Hi!\n", k); printf(" in for: k = %d\n", k), 
        k * k < 26; k += 2, printf(" after the loop: Now k is %d\n", k)){
            printf(" in the loop: k is %d \n", k);
        }
    
    
    return 0;
}




