#include<stdio.h>
#include<stdlib.h>      // 为了使用exit()
// 打开文件并显示该文件，文件必须与该程序在同一目录
// 是不是 cat 命令的函数原型??

int main(int argc, char const *argv[])
{
    
    int ch;
    FILE *fp;
    char fname[50];             // 储存文件名
    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname,"r");      // 打开待读取文件
    if(fp == NULL){
        printf("Failed to open file. Bye\n");
        exit(1);
    }
                                // getc(fp) 从打开的文件中获取一个字符
    while ( (ch = getc(fp)) != EOF )
    {
        putchar(ch);
    }
    fclose(fp);                 // 关闭文件
    
    return 0;
}
