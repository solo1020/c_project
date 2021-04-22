#include <stdio.h>

void mikado(int);


int main(int argc, char const *argv[])
{
    /* code */
    int pooh = 2, bah = 5;
    printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In main(), bah = %d and  &bah = %p\n", bah, &bah);

    /**
     * 将pooh(此时为2)的值传递给mikado方法的形参，不传递地址
     * mikado中的pooh修改不影响main方法中的mikado
     * Java中staic才能实现其他调用的方法中能修改成功修改全局变量的值
     * */
    mikado(pooh);

    return 0;
}

void mikado(int bah){
    int pooh = 10;
    printf("In mikado(), pooh = %d and  &pooh = %p\n", pooh, &pooh);
    printf("In mikado(), bah = %d and  &bah = %p\n", bah, &bah);
}

