#include<stdio.h>

void display(char cr, int lines, int width);

int main(int argc, char const *argv[])
{
    int ch;             // 待打印字符
    int rows, cols;     // 行数和列数

    printf("Enter a character and two integers: \n");
    while ( (ch = getchar()) != '\n' )
    {
        // 如果未成功读取两个整数就跳出循环
        if(scanf("%d %d", &rows, &cols) != 2){
            printf("need two numbers!\n");
            break;
        }
        // scanf("%d %d", &rows, &cols);

        display(ch, rows, cols);

        // 一直读到行尾的\n 换行符，结束while循环
        while (getchar() != '\n')
        {
            continue;
        }
        

        printf("Enter another character and two integers; \n");
        printf("Enter a newline to quit. \n");
    }
    printf("Bye. \n");
    
    return 0;
}

void display(char cr, int lines, int width){
    int row, col;
    for (row = 1; row <= lines; row++){
        for(col = 1; col <= width; col++){
            putchar(cr);
        }
        putchar('\n');  /* 结束一行并换行 */
    }
}
