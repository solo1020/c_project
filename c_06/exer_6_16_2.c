#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int line, size;
    for(line = 0; line < 5; line++){
        for(size = 0; size <= line; size++){
            printf("$");
        }
        printf("\n");
    }



    
    /**
     *  F
        FE
        FED
        FEDC
        FEDCB
        FEDCBA
     * */

    // char c;
    // for(line = 0; line < 6; line++){
    //     for( size = 0; size <= line; size++){
    //         printf("%c", 'F'-size);
    //     }
    //     printf("\n");
    // }



    /*
        A
        BC
        DEF
        GHIJ
        KLMNO
        PQRSTU

    */
    // char c = 'A' - 1;
    // for(line = 0; line < 6; line++){
    //     for(size = 0; size <= line; size++){
    //         // c = c + 1;     // 与上例区别是 每行的起始字符都不一样
    //         printf("%c", c += 1);    // 所以将这个字符存进变量里
    //     }
    //     printf("\n");
    // }

    char c = 'A';
    printf("enter a uppercase charactor: ");
    scanf("%c", &c);
    for(line = 0; line < 5; line++){
        for(size = 0; size ;){
            
        }
    }

    return 0;
}

