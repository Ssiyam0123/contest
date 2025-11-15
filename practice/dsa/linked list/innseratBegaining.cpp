#include<bits/stdc++.h>


struct element{
    int data;
    struct element *next;
};

struct element *head = NULL;

void insertatFisrt(int x){
    struct element *newElement = (struct element*)malloc(sizeof(struct element));

    newElement->data = x;
    newElement->next = head;
    head = newElement;
}

void show(){
    struct element* temp = head;
    while (temp!= NULL)
    {
        /* code */
        printf("->%d\n", temp->data);
        temp = temp->next; 
    }
    
}

int main(){
    insertatFisrt(30);
    insertatFisrt(20);
    insertatFisrt(10);
    show();
}


