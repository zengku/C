### **C 语言风格**

1. 比较两个字符串等值，通过宏定义：
    ```c
    #define Streq(s1, s2) (strcmp((s1), (s2)) == 0)
    ```
    代替
    ```c
    if (!strcmp(s1, s2))
    ```
2. 头文件区分 <x.h> 和 "y.h"
3. 不在头文件中定义变量及函数
4. 头文件应防止递归引用
    ```c
    /* example.h */
    #ifndef _EXAMPLE_H_
    #define _EXAMPLE_H_
    ...
    #endif /* _EXAMPLE_H_ */
    ```
5. 换行代码使用 UNIX 格式（'\n'）；而非（'\r\n'）
6. 每行只能包括一个语句：
    ```c
    if (ptr == 0) {
        return;
    }
    代替：
    if (ptr == 0) return;
    ```
7. if-else、for、while、do-while 复合体的大括号采用 “K&R风格”:
    ```c
    control {
        statement;
    }
    ```
8. switch-case 使用:
   ```c
    switch (expr) {
    case A:
    case B:
        statement;
        break;
    default:
        break;
    }
    ```
9.  if-else 使用：
    ```c
    if (expr) {
        statement;
    } else {
        statement;
    }
    ```
10. 不能已下划线作名字的第一个或最后一个字符
11. #define 定义的符号常数都用大小写
12. 枚举常数可首字母大写后续字母小写或都用大写
13. union, typedef, variable, struct, union, enum tag 的名字都用小写
14. 宏定义实现的函数功能都用大写,除非它可以像getchar()（实际是宏定义）
15. typedef 定义名字应加上 '_t' 后缀
16. 函数命名：模块_动词_宾语
17. 超过一次常数应用宏定义或变量的常数形式
18. 避免采用宏定义实现函数，优先采用inline()
19. 宏定义的参数及宏定义整体应加括号
20. 多个语句构成的宏定义，应用 do-whlie 构造：
    ```c
    #define INIT_LIST_HEAD(ptr) do {
        (ptr)->next = (ptr);\
        (ptr)->prev = (ptr);\
    } while (0)
    ```
21. 没有关联的全局对象声明，即使类型相同也不放在同一行
22. 有初值的变量都应该显式地初始化
23. 文件中的变量及函数应尽量用static来缩小可见域
24. 函数内局部变量的定义与初始化赋值应分开，初始化赋值靠近变量初次使用
25. extern形式声明外部符号应放在头文件中说明
26. 函数调用应检查其返回值，不关心返回值的调用应采用如下形式：
    ```c
    (void)printf("...\n");
    ```
27. 在函数的入口进行参数检查
28. assert()通常只能用于程序调试，调试完后删除