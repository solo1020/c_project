#include<stdio.h>

// 获取输入到缓冲区并输出

int main(int argc, char const *argv[])
{
    
    int ch;
    printf("enter you input: \n");
    while( (ch = getchar()) != EOF){
        putchar(ch);
    }
    return 0;
}
