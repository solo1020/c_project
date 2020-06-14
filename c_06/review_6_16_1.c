#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    char chs[26];
    
    int index;
    for ( index = 0; index < 26; index++ ){
        chs[index] = 'a' + index;
        printf("the character is : %c\n", chs[index]);
    }

    return 0;
}

