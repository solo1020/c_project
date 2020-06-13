#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("enter a char: ");
    // scanf("%c", &ch);       // 一次只能读取一个字符 输入字符串也只读取一个字符
    // while (ch != 'g')       
    // {
    //     // printf("%c ", ch);
    //     printf("%c ", ++ch);
    //     scanf("%c", &ch);
    // }                            // Go west, youn
    
    // do{
    //     scanf("%c",&ch);
    //     printf("%c", ch);
    // }while (ch != 'g');     //Go west, young
    
    scanf("%c", &ch);
    for(ch = '$'; ch != 'g'; scanf("%c", &ch)){
        printf("%c", ch);       //$o west, youn
    }               

    return 0;
}
