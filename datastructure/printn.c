#include <stdio.h>

void PrintN(int n);
void PrintN2(int n);

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    printf("enter a num:");
    scanf("%d",&n);
    PrintN(n);

    return 0;
}

void PrintN(int n){
    int i;
    for(i = 1; i <= n; i++){
        printf("%d\n",i);
    }
    return;
}

void PrintN2(int n){
    if(n){
        PrintN2(n-1);
        printf("%d\n",n);
    }
    return;
}
