#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 0;
    while( ++i < 4){       // ++i 使用 i+1 后的值 
        printf("Hi! ");     // 跳出while的时候 ++i 为4， i=3
    }
    printf("\n");
    do                      //先 do 一次，再判断while
    printf("Bye! ");        // while 判断的实际是  i 本身 < 8 判断之后 i++
    while(i++ < 8);         // i = 3,4,5,6,7
    

    int j;
    char ch;

    // 先 j++ 再 ch += 2*j
    for(j = 0, ch = 'A'; j<4; j++, ch += 2 * j){    
        printf("%c ", ch);      // 不是 C G M U    
    }                       // 因为是 printf 执行完再 j++,再下一轮循环
                            // 所以是 ACGM
    return 0;
}
