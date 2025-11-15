#include<bits/stdc++.h>


struct node
{
    /* data */
    int data;
    struct node* link;
};

                

struct node* head = NULL;

struct node *newNode = malloc(sizeof(struct node));

newNode-> data =  5;
newNode-> link = NULL;
head = newNode;
