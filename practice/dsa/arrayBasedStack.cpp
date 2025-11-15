#include <stdio.h>
#include <string.h>
#define MAX 5

char stack[MAX][50];
int top = -1;

void push(char operation[])
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }
    top++;
    strcpy(stack[top], operation);
    printf("Operation added: %s\n", operation);
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
        return;
    }
    printf("Undo operation: %s\n", stack[top]);
    top--;
}

void display()
{
    if (top == -1)
    {
        printf("No operations in stack.\n");
        return;
    }

    printf("\nCurrent operations (top to bottom):\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d. %s\n", i + 1, stack[i]);
    }
}

int main()
{
    int option;
    char op[50];

    while (1)
    {
        printf("\n1. Push  2. Pop  3. Display  4. Exit\nEnter choice: ");
        scanf("%d", &option);
        getchar(); // clear leftover newline from input buffer

        switch (option)
        {
        case 1:
            printf("Enter operation: ");
            fgets(op, sizeof(op), stdin);
            // op[strcspn(op, "\n")] = '\0'; // remove newline
            push(op);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }
}
