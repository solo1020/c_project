#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    int num;
    for(num = 1; num <= 11; num++){
        if(num %3 == 0){
            putchar('$');
        }else{
            putchar('*');
        }
        putchar('#');
        putchar('%');
    }
    putchar('\n');
    return 0;
}