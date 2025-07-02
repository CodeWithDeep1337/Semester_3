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
        struct Node *prev = current;
        struct Node *temp = current->next;

        while (temp != NULL)
        {
            if (temp->data == current->data)
            {

                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }
        current = current->next;
    }

    display(head);
}

struct Node *head = NULL;
struct Node *second = NULL;
struct Node *third = NULL;
struct Node *fourth = NULL;
struct Node *five = NULL;

int main()
{

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    five = (struct Node *)malloc(sizeof(struct Node));

    head->data = 2;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 2;
    third->next = fourth;

    fourth->data = 3;
    fourth->next = five;

    five->data = 1;
    five->next = NULL;

    deleteDuplicate(head);

    return 0;
}
