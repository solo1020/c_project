#include <stdio.h>
int main(int argc, char const *argv[])
{
    int quack = 2;
    printf("quack += 5 ---> %d\n", quack+=5);
    
    quack = 2;
    printf("quack*= 10 ---> %d\n", quack*= 10);

    quack = 2;
    printf("quack -= 6 ---> %d\n", quack -= 6);

    quack = 2;
    printf("quack /= 8 ---> %f\n", quack /= 8);

    quack = 2;
    printf("quack %%= 3 ---> %d\n", quack %= 3);
    
    // double value;
    int value;
    for(value = 36; value > 0; value /= 2){
        printf("%3d\n", value);

        // 因为double为浮点数，实际的值不可能取到0,
        // 所以 value是浮点数时 会一直除下去知道超过精度，或者最小值？再返回
        // printf("actual value ---> %.15f", value);
    }

    int num = 0;
    printf("enter a num: ");

    if( scanf("%d",&num) == 1 ){
        printf("entered one right num: %d", num);
    }
    return 0;
}

