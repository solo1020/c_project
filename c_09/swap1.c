/* 第一个版本的交换函数 */
#include <stdio.h>

void interchange(int u, int v);

int main(int argc, char const *argv[])
{
    /* code */
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(x, y);
    printf("Now x = %d and y = %d.\n", x, y);
    return 0;
}

void interchange(int u, int v){
    int temp;
    printf("Original u = %d and v = %d.\n",u, v);
    temp = u;
    u = v;
    v = temp;
    printf("Now u = %d and v = %d.\n", u, v);
}

