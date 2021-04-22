#include <stdio.h>

void to_binary(unsigned long n);

int main(int argc, char const *argv[])
{
    /* 
    如何用二进制表示十进制5
    在二进制中 奇数的末尾一定是1 偶数末尾一定是0
    所以通过5 % 2 即可确定 5 的二进制数的最后一位是 1 还是 0
    因此计算的第一位数字实际上是待输出二进制数的最后一位
    可以想到 在递归函数的递归调用之前计算 n % 2
    在递归调用之后打印计算结果
    这样计算的的第1个值正好是最后一个打印的值
    要获得下一位数字 必须将原数除以2 (十六进制是否除以16)
     */
    
    unsigned long number;
    printf("Eneter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("Binary equivalent:  ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void to_binary(unsigned long n){
    int r;
    r = n % 2;
    if(n >= 2){
        to_binary( n / 2);
    }
    putchar(r == 0 ? '0' : '1');
    return;
}

