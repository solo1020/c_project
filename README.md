# c_project

数据类型输出：
===
%3d 不足三位整数右对齐 超过三位以实际为准  

运算符
===
_Bool 值只能为0 或1 非0均视为真  

scanf
---
```
scanf("%lf",&mint);     // 赋值给数组第一个元素
scanf("%lf",&mint[2]);  // 赋值给地三个元素
```

int array[] 是 c 语言写法  
int [] array 是 Java写法  

字符IO:
---
getchar()  

putchar() 只根据最后一个字节决定显示哪个字符  

strlen()  

ctype.h 字符类型判断：
---
为真返回true,即 非0  

是字母或数字：isalnum() 
字母：isalpha()  
空白符（空格 制表符 换行符）: isblank()  
控制字符如 ctrl+B：iscntrl()  
数字：isdigit()  
小写字母：islower()  
大写字母：isupper()  
十六进制数字符：isxdigit()  
tolower():如果参数是大写函数返回小写，否则返回原参数  
toupper():同理  

while(x++ < 10 && x+y < 20 )x先++,因为逻辑运算从左到右  

#### Charpter 8 输入输出字符串：

1. 缓冲输入：
先把输入存储到缓冲区，按下enter后才可以使用缓冲区的内容    
2. 无缓存输入：
输入的同时即时进行输出，无法修正错误  
缓冲分为完全缓冲和行缓冲：完全缓冲再缓冲区被填满时才刷新缓冲区，将内容发送至目的地，行缓冲再出现换行符时刷新缓冲区   

不同的系统中也可以使用 if(ch == '\n') 来检查换行符，底层IO函数会进行转换
*****
MS-DOS和UNIX系统检测文件结尾：
---
存储文件大小的信息，程序在读到指定字节时便到达文件末尾EOF    
EOF定义在stdio.h中： #define EOF(-1)   
某些系统EOF的值可能不是 -1，但是它仍是标记文件末尾的符号，而不上文本里写的abc这种字符   
判断是否到末尾：
===
while( (ch = getchar()) != EOF )   
EOF需要的位数比字符型值所能提供的位数要多，这也是getchar返回一个整形值而不是字符值的原因    
***

文件重定向：
====
从文件输入到程序：   
```
echo_eof.exe < words.txt
```
从程序输出到文件：    
```
echo_eof.exe > mywords.txt
```
组合重定向：   
```
echo_eof.exe < mywords.txt > savewords
```
注意
---
重定向用来连接一个可执行程序或操作系统命令  和  一个数据文件   
不能用于连接一个数据文件和另一个数据文件，也不能用于两个程序直接的连接   

##### 一些操作系统要求重定向运算符左侧有一个空格，右侧没有空格

### 文件操作：

创建文件：
----
FILE *fp; 

定义文件名：   
----
char fileName[50];  

打开文件：类似Java的file对象
---
fp = fopen(fileName, "r");   

获取文件中的一个字符：
----
getc(fp)

关闭文件：
----
fclose(fp)

