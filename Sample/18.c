/*
    TODO:创建一个链表
*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct node {
    int data;
    struct node *next;
} node;

typedef struct node *Linklist;

node *CreateList(int n)
{
    int i = 1;
    Linklist rear, s;

    node *L = (node *)malloc(sizeof(node));
    if (!L) {
        return 0;
    }
    L->next = NULL;
    rear = L;

    while (n) {
        s = (Linklist)malloc(sizeof(node));
        printf("请输入第 %d 个数：", i++);
        scanf("%d", &(s->data));
        rear->next = s;
        rear = s;
        n--;
    }
    rear->next = NULL;

    return L;
}

void Print(Linklist L)
{
    Linklist p = L->next;

    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main(int argc, char const *argv[])
{
    Linklist L = NULL;
    int n;

    printf("请输入数据个数：\n");
    scanf("%d", &n);
    L = CreateList(n);
    Print(L);
    
    return 0;
}
