#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void deleteDuplicate(struct Node *head)
{
    struct Node *current = head;

    while (current != NULL && current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            struct Node *duplicate = current->next;
            current->next = current->next->next;
            free(duplicate);  
        }
        else
        {
            current = current->next;
        }
    }

    display(head);
}

struct Node *head = NULL;
struct Node *second = NULL;
struct Node *third = NULL;
struct Node *fourth = NULL;

int main()
{

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 2;
    third->next = fourth;

    fourth->data = 3;
    fourth->next = NULL;

    deleteDuplicate(head);

    return 0;
}
