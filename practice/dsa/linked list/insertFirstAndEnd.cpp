#include<bits/stdc++.h>

struct node{
    int data;
    struct node *next;
};

struct node* head = NULL;



void insertAtFirst(int x){
    struct node *element  = (struct node*)malloc(sizeof(struct node));

    element->data = x;
    element->next = head;
    head = element;
}


void insertAtEnd(int x){
    struct node* element = (struct node*)malloc(sizeof(struct node));
    element->data = x;
    element->next = NULL;

    if(head == NULL){
        head = element;
    }else {
        struct node *pp = head;
        while(pp->next != NULL){
            pp = pp->next;
        }
        pp->next = element;
    }
}


void show(){
    struct node *s = head;
    while(s!= NULL){
        printf("->%d\n", s->data);
        s = s->next;
    }
}

int main(){
    insertAtFirst(30);
    insertAtFirst(20);
    insertAtFirst(10);
    insertAtEnd(60);
    insertAtEnd(70);
    insertAtEnd(80);
    show();
}