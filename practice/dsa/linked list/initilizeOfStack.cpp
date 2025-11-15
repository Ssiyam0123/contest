#include <bits/stdc++.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertBegininning(int x)
{

    struct node *insertAtFirst = (struct node *)malloc(sizeof(struct node));

    insertAtFirst->data = x;
    insertAtFirst->next = head;
    head = insertAtFirst;
}

void printList() {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d → ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void show(){
    struct node* pri = head;
    while (pri != NULL)
    {
        /* code */
        printf("->%d\n",pri->data);
        pri = pri->next;

    }
    
}


int main()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->data = 10;
    newNode->next = NULL;
    head = newNode;
    printList();
    insertBegininning(20);
    insertBegininning(30);
    insertBegininning(40);
    // printList();
    show();
}
