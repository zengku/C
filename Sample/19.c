/*
    TODO:双向环形列表
*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct LNode {
    int data;
    struct LNode *next;
    struct LNode *prior;
} LNode, *LinkList;

LinkList CreateList(int);
void print(LinkList , int);

int main(int argc, char const *argv[])
{
    LinkList head = NULL;
    int n;

    printf("input the length of the linking table.\n");
    scanf("%d", &n);
    head = CreateList(n);
    printf("the value of link table:\n");
    print(head, n);

    return 0;
}

LinkList CreateList(int n)
{
    // p 是当前正在声明的链表节点
    // q 是第一个已经完成声明的链表节点
    // L 是第一个链表元素
    LinkList L, p, q;
    int i;

    // 额外声明一个节点，保存第一个链表节点
    L = (LNode *)malloc(sizeof(LNode));
    if (!L) {
        return 0;
    }

    for (i = 1; i <= n; i++) {
        p = (LNode *)malloc(sizeof(LNode));
        printf("input %dth value.\n", i);
        scanf("%d", &(p->data));
        // 对于第一个链表元素，只需要赋值，其前驱后继为空，进行保存
        if (i == 1) {
            p->next = NULL;
            p->prior = NULL;
            L = p;
            q = p;
        }
        // 对于后继的链表节点，将其前驱置为q，将q的后继置为p
        else {
            p->next = NULL;
            p->prior = q;
            p->next = p;
            q = p;
        }
        // 如果是最后一个链表节点，将其与第一个元素连接。
        if (i == n) {
            L->prior = q;
            q->next = L;
        }
    }

    return q;
}

void print(LinkList p, int n)
{
    int i = 1;

    while (i <= n) {
        printf("%d ", p->data);
        if (p->prior != NULL) {
            printf("prior = %d\n", p->prior->data);
        }
        p = p->next;
        i++;
    }
}