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

## First of C++ //Hello World

```C++
	#include <bits/stdc++.h>
	using namespace std;
	int main() {
  		cout << "hello world\n";
  		return 0;
	}
```
## Add1 //Without Input

```C++
	#include <bits/stdc++.h>
	using namespace std;
	int main() {
  		int a=123;
  		int b=456;
  		cout<<a+b<<endl;
  		return 0;
	}
```

## Add2 //With Input

```C++
	#include <bits/stdc++.h>
	using namespace std;
	int main() {
  		int a,b;
  		cin>>a>>b;
  		cout<<a+b<<endl;
  		return 0;
	}
```

## Expression ：

### DataType

- 整型 char/byte->short->int->long long
- 浮点型 float->double
### Constant
- 'a' 1 1LL 
- 0.5f 0.5  +0.21e+8
### Variable declare
- ``` int x;```
- ``` int x,y,z;```
- ``` int x,y=3;```
### Arithmetic operator

- 加 ```+```
- 减  ```-```
- 乘 ```*```
- 除  ```/```    
- 模 ```%```

## Excise ：

- 输出helloworld//helloworld.cpp
- 计算A+B//add.cpp
- 计算100年的毫秒值//life.cpp
- [AOJ Conteset 1190](https://oj.ahstu.cc/JudgeOnline/contest.php?cid=1190)
