#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void search(int key) {
    struct Node* temp = head;
    int pos = 1;
    while(temp != NULL) {
        if(temp->data == key) {
            printf("Element found at position %d\n", pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Element not found\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    search(20);
    search(50);
    return 0;
}