//已有a、b两个链表，每个链表中的结点包括学好、成绩。要求把两个链表合并，按学号升序排列。
#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int Sno;
    int score;
    struct Student* next; 
};
void inserNode(struct Student **head,int date,int score);
void printList(struct Student *head);
void concatenateLists(struct Student* head_A,struct Student* head_B);
void swapNode(struct Student *node_1,struct Student *node_2);
void sortNode(struct Student *head);
int main(void) {
    struct Student* head_A=NULL;
    struct Student* head_B=NULL;
    int a,b,Sno,score;
    scanf("%d %d",&a,&b);
    for (size_t i = 0; i < a; i++)
    {
        scanf("%d %d",&Sno,&score);
        inserNode(&head_A,Sno,score);
    }
    for (size_t i = 0; i < b; i++)
    {
        scanf("%d %d",&Sno,&score);
        inserNode(&head_B,Sno,score);
    }
    concatenateLists(head_A, head_B);
    sortNode(head_A);
    printList(head_A);
    return 0;
}

//排序节点
void sortNode(struct Student *head){
    struct Student *current = head;
    struct Student* last = NULL;
    int swapped;
    do {
        swapped = 0;
        current = head;

        while (current->next != last) {
            // 比较当前节点和下一个节点的学号，如果顺序不正确则交换它们
            if (current->Sno > current->next->Sno) {
                swapNode(current, current->next);
                swapped = 1;
            }
            current = current->next;
        }
        last = current;  // 更新最后一个已排序节点的位置
    } while (swapped);
}


//将两个节点内的数据交换
void swapNode(struct Student *node1,struct Student *node2){
    int tempSno = node1->Sno;
    int tempScore = node1->score;

    node1->Sno = node2->Sno;
    node1->score = node2->score;

    node2->Sno = tempSno;
    node2->score = tempScore;
}

//将连个链表连接
void concatenateLists(struct Student* head_A,struct Student* head_B){
    while (head_A->next!=NULL)
    {
        head_A=head_A->next;
    }
    head_A->next = head_B;
}
//打印一个链表的全部内容
void printList(struct Student *head){
    struct Student *current = head;
    // printf("*********\n");
    while (current!=NULL)
    {
        printf("%d %d\n",current->Sno,current->score);
        current=current->next;
    }
}
//向链表的最后插入节点
void inserNode(struct Student **head,int Sno,int score){
    struct Student *newNode = (struct Student *)malloc(sizeof(struct Student));
    newNode->Sno = Sno;
    newNode->score = score;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Student *current = *head;
        while (current->next!=NULL)
        {
            current = current->next;
        }
        current->next= newNode;
    }
}
