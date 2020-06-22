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
