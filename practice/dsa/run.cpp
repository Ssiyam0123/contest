#include <bits/stdc++.h>


struct node
{
    char name[50];
    struct node *next;
};

struct node *head = NULL;  // Initialize to NULL

void insertAtFirst(char name[])
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    strcpy(newNode->name, name);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(char name[])
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    strcpy(newNode->name, name);
    newNode->next = NULL;

    // Handle empty list
    if (head == NULL) {
        head = newNode;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void show(){
    struct node* temp = head;
    int count = 1;
    while (temp != NULL)
    {
        printf("%d->%s\n", count, temp->name);
        temp = temp->next;
        count++;
    }
}

void deleteSong(char name[]){
    if (head == NULL) {
        printf("Playlist is empty!\n");
        return;
    }
    
    // Check if head node needs to be deleted
    if(strcmp(head->name, name) == 0){
        struct node *del = head;
        head = head->next;
        free(del);
        printf("Deleted: %s\n", name);
        return;
    }
    
    struct node *temp = head;
    
    // Find the node before the one to delete
    while(temp->next != NULL && strcmp(temp->next->name, name) != 0){
        temp = temp->next;
    }
    
    // If song not found
    if(temp->next == NULL){
        printf("Song '%s' not found!\n", name);
        return;
    }
    
    // Delete the node
    struct node *del = temp->next;
    temp->next = del->next;
    free(del);
    printf("Deleted: %s\n", name);
}

int main(){
    insertAtFirst("song a");
    insertAtFirst("song b");
    insertAtFirst("song c");
    insertAtEnd("song f");
    insertAtEnd("song g");
    insertAtEnd("song h");

    printf("Original playlist:\n");
    show();
    printf("____________\n");
    
    deleteSong("song a");
    deleteSong("song x");  // Test not found case
    deleteSong("song c");  // Delete head
    
    printf("____________\n");
    printf("After deletion:\n");
    show();
    
    return 0;
}