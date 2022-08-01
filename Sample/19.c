/*
    TODO:˫�����б�
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
    // p �ǵ�ǰ��������������ڵ�
    // q �ǵ�һ���Ѿ��������������ڵ�
    // L �ǵ�һ������Ԫ��
    LinkList L, p, q;
    int i;

    // ��������һ���ڵ㣬�����һ������ڵ�
    L = (LNode *)malloc(sizeof(LNode));
    if (!L) {
        return 0;
    }

    for (i = 1; i <= n; i++) {
        p = (LNode *)malloc(sizeof(LNode));
        printf("input %dth value.\n", i);
        scanf("%d", &(p->data));
        // ���ڵ�һ������Ԫ�أ�ֻ��Ҫ��ֵ����ǰ�����Ϊ�գ����б���
        if (i == 1) {
            p->next = NULL;
            p->prior = NULL;
            L = p;
            q = p;
        }
        // ���ں�̵�����ڵ㣬����ǰ����Ϊq����q�ĺ����Ϊp
        else {
            p->next = NULL;
            p->prior = q;
            p->next = p;
            q = p;
        }
        // ��������һ������ڵ㣬�������һ��Ԫ�����ӡ�
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