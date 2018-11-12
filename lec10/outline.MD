# 字符、字符数组、字符串

## 字符类型 char (无符号小整数 0~255) 又称ASCII
### 字符分类
- 'A'-'Z' 65-90
- 'a'-'z' 92-122
- '0'-'9' 48-57
### 字符分类转化函数API
- isalpha/isdigit/isupper/islower/isspace
- toupper/tolower
### 练习
- 字符加密

##字符数组(串）：
定义一个长度为n的字符数组，我们往往只关心第一个'\0'及之前的内容，称为字符串，
###定义：
- char a[100];//长度为100但是没有初始化
- char b[100]="abc";//数组长度为100，串长度为3 前三个字符是'a''b''c'，后面全部是0
- char c[100]={'a','b','c'} ;//同上
- char d[]="abc"//数组长度为4，串长为3 前三个字符是'a''b''c'，后面全部是0
- char e[]={'a','b','c'} //数组长度为3，串长为3 三个字符是'a''b''c'，后面未必是0,不可以用cout输出
### 输入
- 格式化读入 cin/scanf
- 行读取  fgets/gets
### 输出
- cout/printf/puts
### 操作API:
- strlen 串长度
- strcpy 串拷贝
- strcat 串连接
- strcmp 串比较（按照字典顺序）
- strstr* 串匹配
### 算法：
- sort
- reverse
- max_element/min_element


###字符串应用：
- 处理大整数
- 判断对称
- 统计计数等


## 推荐自学string

