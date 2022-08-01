1、"Hello world"  
    所占用 11+1 个字节数，‘\0’是编译器自动加上的。
2、字符串和字符数组
    char c[11] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    or
    char c[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd'};
    c[0] = 'h';
    c[11] = 'd';
    字符串长度是 12， 字符数组长度是 11，并无‘\0'
    一次性初始化化字符串：
        char c[] = {"hello world"};     // 使用双引号
        or
        char c[] = "hello world";       // 等效方法，可以省去大括号
3、 字符串的输入输出
    char c[] = "message";   // 定义字符数组
    printf ("%s", c);       // 没有换行
    puts (c);               // 打印完并换行
    puts（）遇到 ‘\0’时，就会被替换为‘\n’，实现换行

    scanf("%s", c);     // 输入"hello world", c 的内容为 hello
    gets(c);            // 输入"hello world", c 的内容为 hello world
    scanf() 读取一组字符，直到遇到一个空格或者换行字符为止；
    gets() 只有在一个换行符被检测到才停止接收字符。
    ！！！使用 scanf() ，参数 c 前没有取地址运算符 &
    
4、相关函数
字符串长度函数：
int strlen(char *d)     // 返回字符串 d 的长度， 不包括终止符 NULL

字符串连接函数：
char *strcat(char *d, char *s)  // 连接字符串 s 到字符串 d，返回字符串 d
cahr *strncat(char *d, char *s, int n) // 连接字符串 s 中至多 n 个字符到字符串 d，返回 d

字符串复制函数：
char *strcpy(char *d, char *s)  // 复制字符串 s 到字符串 d，返回字符串 d
char *strncpy(char *d, char *s, int n)  // 复制字符串 s 中至多 n 个字符到字符串 d；
// 如果 s 小于 n 个字符，用 “\0” 补上，返回字符串 d
void *memcpy(void *d, void *s, int n)  // 从 s 复制 n 个字符到 d，返回字符串 d
void *memmove(void *d, void *s, int n) // 和 menmcoy 相同，即使 d 和 s 部分相同也运行

字符串比较函数：
int strcmp(char *d, char *s)   // 比较字符串 d 与字符串 s。如果 d<s，返回 -1；
// 如果 d == s，返回 0；如果 d>s，返回 1
int strncmp(char *d, char *s, int n)    // 比较字符串 d 中至多 n 个字符与字符串 s。
// 如果 d == s，返回 0；如果 d>s，返回 1
int memcmp(void *d, void *s, int n)     // 比较 d 的首先 n 个字符与 s 和 strcmp 返回值同

字符串查找函数：
char *strchr(char *d, char c)   // 返回一个指向字符串 d 中 c 第 1 次出现的指针；
// 或者如果没有找到 c，则返回指向 NULL 的指针
char *strrchr(char *d, char c)  // 返回一个指向字符串 d 中 c 第 1 次出现的指针；
// 或者如果没有找到 c，则返回指向 NULL 的指针
char *strstr(char *d, char *s)  // 返回一个指向字符串 d 中字符 s 第 1 次出现的指针；
// 或者如果没有找到 c，则返回指向 NULL 的指针
void *memchr(void *d, char c, int n)    // 返回一个指向被 d 所指向的 n 个字符中 c
// 第 1 次出现的指针；或者如果没有找到 c，则返回指向 NULL 的指针

字符串填充函数：
void *memset(void *d; char c, int n)    // 使用 n 个字符 c 填充 void* 类型变量 d

字符大小写转换函数
int tolower(int c)  // 转换整数 c 为小写字母。当 c 为大写英文字母时，则返回对应的小写字母
// 否则返回原来的值
int toupper(int c)  // 转换整数 c 为大写字母。当 c 为小写英文字母时，则返回对应的大写字母
// 否则返回原来的值

转换和存储管理函数
转换函数
int atoi(string)    // 转换一个 ASCII 字符串为一个整数。在第一个非整形字符处停止
double atof(string) // 转换一个 ASCII 字符串为一个双精度数
string itoa(int, char *, int)   // 转换一个整数为一个 ASCII 字符串。为返回的字符串
// 分配的空间必须足够大于被转换的数值

存储管理函数
void *malloc(size_th)   // 为一个大小为 n 的对象分配存储空间
void *calloc(size_n, size_n) // 为 n 个对象的数组分配存储空间，每个的大小为 n，
// 初始化所有被分配的内存为 0
void *realloc(void *p, size_n)  // 重新分配空间的大小为 n，内容保持与旧的相同，
// 等于新的大小
void free(void *p)  // 释放指向的空间

随机函数
0 ~ 10 随机整数
int n = rand() % 11;

产生 1 ~ 10
int n = 1 + rand() % 10

生成 [a, b] 范围内的一个随机整数
int n = a + rand() % (b - a + 1)

诊断函数
assert() 是诊断函数，作用测试一个表达式的值是否为 false，也就是为 0，并且在条件
为 false 时终止程序，参数的表达式的结果时一个整形数据。该函数位于 <assert.h>
