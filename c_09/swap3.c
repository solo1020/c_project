/* 指针解决交换函数交换参数值的变化问题 */
#include <stdio.h>

void interchange(int * u, int * v);

int main(int argc, char const *argv[])
{
    /* code */
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n",x, y);

    // 将变量的地址传递给函数
    interchange(&x, &y);
    printf("Now x = %d and y = %d.\n",x, y);
    return 0;
}

void interchange(int * u, int * v){
    int temp;
    // 获取u 指针指向对象的值
    // 这里 u 本身就是指针, *u 则是取出u指针的值
    temp = *u;
    *u = *v;
    *v = temp;
}

