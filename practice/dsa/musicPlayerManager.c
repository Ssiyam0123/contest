#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Song {
    char name[50];
    struct Song *next;
};

struct Song *head = NULL;

// Insert at beginning
void insertBeginning(char name[]) {
    struct Song *newNode = malloc(sizeof(struct Song));
    strcpy(newNode->name, name);
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertEnd(char name[]) {
    struct Song *newNode = malloc(sizeof(struct Song));
    strcpy(newNode->name, name);
    newNode->next = NULL;

    if (head == NULL) {   
        head = newNode;
        return;
    }

    struct Song *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Delete a song by name
void deleteSong(char name[]) {
    if (head == NULL) {
        printf("Playlist empty!\n");
        return;
    }

    // If first song is the match
    if (strcmp(head->name, name) == 0) {
        struct Song *del = head;
        head = head->next;
        free(del);
        printf("Deleted: %s\n", name);
        return;
    }

    struct Song *temp = head;
    while (temp->next != NULL && strcmp(temp->next->name, name) != 0)
        temp = temp->next;

    if (temp->next == NULL) {
        printf("Song not found!\n");
        return;
    }

    struct Song *del = temp->next;
    temp->next = del->next;
    free(del);

    printf("Deleted: %s\n", name);
}

// Display playlist
void displayPlaylist() {
    printf("\nPlaylist:\n");

    struct Song *temp = head;
    if (temp == NULL) {
        printf("Playlist is empty.\n");
        return;
    }

    while (temp != NULL) {
        printf("%s -> ", temp->name);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insertBeginning("Song A");
    insertEnd("Song B");
    insertEnd("Song C");
    insertBeginning("Intro");

    displayPlaylist();

    deleteSong("Song B");

    displayPlaylist();

    return 0;
}
