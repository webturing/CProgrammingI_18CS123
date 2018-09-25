# lec01 : Introduction & IO
### by ZHAO Jing  [zj@wetburing.com]

## Introduction of C/C++ and ACM

1. What is C/C++?
2. What is NOI/ ACM/ICPC
3. What is Git/GitHub? [About Mr ZHAO?](!https://github.com/webturing/)
4. 开发工具: Codeblocks/DevCpp

## Useful resources:

- 作业、练习、考试/竞赛[安科OJ](https://oj.ahstu.cc)
- 上课资料同步： [MrZHAO's Github]https://github.com/webturing/]
- 课程群209737504  
- 安科ACM官方群 391668336 //建议刷题超过100题后加入
- 菜鸟网站： http://www.runoob.com/cprogramming/c-tutorial.html
- API手册 ：http://www.cplusplus.com/reference/

## First of C //Hello World

```C++
	#include<stdio.h>
	int main()
	{
	    printf("helloworld");
        printf("%d",123+456);
        return 0;
	}
```

## Add1 //Without Input

```C++
	#include<stdio.h>
	int main()
	{
	   int a=123;
	   int b=456;
	   printf("%d",a+b);
       return 0;
	}
```

## Add2 //With Input

```C++
	#include<stdio.h>
	int main()
	{
	   int a,b;
	   scanf("%d",&a);
	   scanf("%d",&b);
	   printf("%d",a+b);
       return 0;
	}
```

## Expression ：

### DataType

- 整型 char/byte->short->int->long long
- 浮点型 float->double

### Arithmetic operator

- 加 ```+```
- 减  ```+```
- 乘 ```*```
- 除  ```/```    
- 模 ```%```

## Excise ：

- 输出helloworld//helloworld.c
- 计算A+B//add.c
- 计算100年的毫秒值//life.c
- [AOJ Conteset 1190](https://oj.ahstu.cc/JudgeOnline/contest.php?cid=1190)