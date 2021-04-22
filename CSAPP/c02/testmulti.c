/* 计算正整数相乘溢出导致结果异常 */
#include <stdio.h>



int main(int argc, char const *argv[])
{
    /* code */
    printf(" 200*300*400*500 = %d\n", (200*300*400*500));
    printf("(500 * 400) * (300 * 200) = %d\n", ((500 * 400) * (300 * 200)));

    return 0;
}

