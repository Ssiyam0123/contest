#include <bits/stdc++.h>

struct music
{
    char name[50];
    struct music *next;
};

struct music *head = NULL;

void insertAtFirst(char n[])
{
    struct music *newSong = (struct music *)malloc(sizeof(struct music));
    strcpy(newSong->name, n);
    newSong->next = head;
    head = newSong;
}

void insertAtEnd(char n[])
{
    struct music *newSong = (struct music *)malloc(sizeof(struct music));
    struct music *temp = head;
    strcpy(newSong->name, n);

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    newSong->next = NULL;
    temp->next = newSong;
}

void display()
{
    struct music *temp = head;
    while (temp != 0)
    {
        printf("%s", temp->name);
        temp = temp->next;
    }
}

void deleteSong(char n[])
{
    if (strcmp(head->name, n) == 0)
    {
        struct music *del = head;
        head = head->next;
        free(del);
        return;
    }

    struct music *temp = head;
    while (temp->next != NULL && strcmp(temp->next->name, n) != 0)
    {
        temp = temp->next;
    }

    struct music *del = temp->next;

    temp->next = del->next;

    free(del);
}

int main()
{
    int choise;
    char name[50];

    while (1)
    {
        printf("1.insert at first 2.end 3.delete 4.display 5.exit\n");
        scanf("%d", &choise);
        getchar();

        switch (choise)
        {
        case 1:
            printf("enter song name : ");
            fgets(name, sizeof(name), stdin);
            insertAtFirst(name);
            break;

        case 2:
            printf("enter song name : ");
            fgets(name, sizeof(name), stdin);
            insertAtEnd(name);
            break;

        case 3:
            printf("enter song name : ");
            fgets(name, sizeof(name), stdin);
            deleteSong(name);
            break;

        case 4:
            display();
            break;

        case 5:
            return 0;
        }
    }
}