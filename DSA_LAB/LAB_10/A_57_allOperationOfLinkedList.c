#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertFront(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head; 
    head = newNode;
}

void display() {
    struct Node* temp = head;
    if (!temp) {
        printf("List is empty\n");
        return;
    }
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void deleteFront() {
    if (!head) return;
    struct Node* temp = head;
    head = head->next;
    free(temp);
}

void insertEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (!head) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

void deleteEnd() {
    if (!head) return;

    if (!head->next) {
        free(head);
        head = NULL;
        return;
    }

    struct Node* temp = head;
    while (temp->next!=NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
}

void deletePosition(int pos) {
    if (!head) return;
    if (pos == 1) {
        deleteFront();
        return;
    }

    struct Node* temp = head;
    for (int i = 1; temp && i < pos - 1; i++)
      {
        temp = temp->next;
      }  

    if (!temp || !temp->next) return;

    struct Node* del = temp->next;
    temp->next = temp->next->next;
    free(del);
}

void countNodes() {
    int count = 0;
    struct Node* temp = head;
    while (temp) {
        count++;
        temp = temp->next;
    }
    printf("Total nodes: %d\n", count);
}

int main() {
    int choice, value, pos;
    while (1) {
        printf("\n1.Insert At First\n2.Display\n3.Delete At First\n4.Insert At End\n5.Delete At End\n6.Delete At Position\n7.Count\n8.Exit\n");
        printf("enter chice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertFront(value);
                break;
            case 2:
                display();
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                printf("Enter value: ");
                scanf("%d", &value);
                insertEnd(value);
                break;
            case 5:
                deleteEnd();
                break;
            case 6:
                printf("Enter position: ");
                scanf("%d", &pos);
                deletePosition(pos);
                break;
            case 7:
                countNodes();
                break;
            case 8:
                exit(0);
        }
    }
    return 0;
}