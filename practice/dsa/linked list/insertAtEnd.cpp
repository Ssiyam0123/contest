#include<bits/stdc++.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertAtEnd(int x){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }

    struct node* temp = head;
    while (temp->next != NULL)
    {
        /* code */
        temp = temp->next;

    }
    temp->next = newNode;
    
}


void show(){
    struct node *temp = head;

    while(temp != NULL){
        printf("->%d\n",temp->data);
        temp = temp->next;
    }
}

int main(){
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    show();
}