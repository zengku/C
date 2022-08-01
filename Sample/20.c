/*
    �������һ������
*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct LNode {
    int data;
    struct LNode *next;
} LNode, *LinkList;

LinkList CreateList(int n)
{
    LinkList L, p, q;
    int i;

    L = (LNode *)malloc(sizeof(LNode));
    if (!L) {
        return 0;
    }
    L->next = NULL;
    q = L;

    for (i = 1; i <= n; i++) {
        p = (LinkList)malloc(sizeof(LNode));
        printf("������� %d ��Ԫ�ص�ֵ��", i);
        scanf("%d", &(p->data));
        p->next = NULL;
        q->next = p;
        q = p;
    }

    return L;
}

void print(LinkList h)
{
    LinkList p = h->next;

    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main(int argc, char const *argv[])
{
    LinkList head = NULL;
    int n;

    printf("input the length of the linking table.\n");
    scanf("%d", &n);
    head = CreateList(n);

    printf("�ոս����ĸ�������Ԫ�ص�ֵΪ��\n");
    print(head);

    printf("\n\n");
    system("pause");

    return 0;
}
