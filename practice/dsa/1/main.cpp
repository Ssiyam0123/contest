#include <bits/stdc++.h>

#define MAX 5

char stack[MAX][50];
int top = -1;

void push(char o[])
{
    if (top == MAX - 1)
    {
        printf("stack overflow");
    }
    else
    {
        top++;
        strcpy(stack[top], o);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is undeffflow");
    }
    else
    {
        top--;
    }
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%s", stack[i]);
    }
}

int main()
{
    int choise;
    char op[50];

    while (1)
    {
        printf("1. push 2.pop 3.display 4.exit\n enter your choise :");
        scanf("%d", &choise);
        getchar();
        switch (choise)
        {
        case 1:
            printf("enter your stack : ");
            fgets(op, sizeof(op), stdin);
            push(op);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;

        default:
            printf("invcalid choise");
        }
    }
}