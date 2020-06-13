#include <stdio.h>
int main(int argc, char const *argv[])
{
    // int i,j,list(10);
    int i,j,list[10];
    for(i = 1; i <= 10; i++){
        list[i] = 2 * i + 3;
        for(j = 1; j <=i; j++){     // 原来是 for(j = 1; j >=i; j++) 死循环
            printf(" %d ", list[j]);
            // printf("\n");
        }
        printf("\n");
    }

    int lines,num;
    for( lines = 0; lines < 4; lines++ ){
        for( num = 0; num < 8; num++){
            printf("$");
        }
        printf("\n");
    }
    

    return 0;
}
