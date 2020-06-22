#include <stdio.h>

#define SPACE ' '

int main(int argc, char const *argv[])
{
    /* code */
    char ch;
    printf("enter a char: ");
    ch = getchar();

    // while( (ch = getchar()) != '\n')
    while (ch != '\n')
    {
        /* code */
        if(ch == SPACE){
            putchar(ch);
        }else
        {
            putchar(ch + 1);
        }
        ch = getchar();
        
    }
    
    putchar(ch);

    return 0;
}

