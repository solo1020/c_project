#include <stdio.h>
int main(int argc, char const *argv[])
{
    int guess = 1;
    char response;
    printf("Picl an integer from 1 to 100. I will try to guess.");

    printf("it.\n Respond with a y if my guess is right and with");

    printf("\n an n if it is wrong.\n");

    printf("Uh...is your number %d\n", guess);

    while( (response = getchar()) != 'y' ){
        if (response == 'n'){
            printf("Well, then, is it %d\n", ++guess);
        }else
        {
            printf("Sorry, I understand only y or n.\n");
        }

        // 判断当前行是否还有剩余字符，有则跳过 即只判断第一个字符
        while (getchar() != '\n')
        {
            continue;
        }
        
    }
    printf("I knew I could do it!\n");
    return 0;
}
