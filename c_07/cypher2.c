#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{

    char ch;    
    printf("enter a charactor: ");
    while ( (ch = getchar()) != '\n' )
    {
        /* code */
        if(isalpha(ch)){
            putchar(ch+1);
        }else
        {
            putchar(ch);
        }
    }
    putchar(ch);
    return 0;
}
