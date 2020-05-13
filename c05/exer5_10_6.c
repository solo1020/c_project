#include <stdio.h>

#define FORMAT "%s! C is cool!\n"
int main(void){
    int num = 10;
    printf(FORMAT, FORMAT); // 用FORMAT替换%s
    printf("%d\n", ++num);  // 11
    printf("%d\n", num++);  // 11
    printf("%d\n", num--);  // 12
    printf("%d\n", num);  // 11

    return 0;
}