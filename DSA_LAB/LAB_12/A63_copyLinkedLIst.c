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
void copy(struct Node *head, struct Node *newNode)
{
    newNode = head;
    struct Node *temp = head->next;
    struct Node *temp2 = newNode->next;
    while (temp != NULL)
    {

        temp2 = temp;
        temp = temp->next;
        temp2 = temp2->next;
    }
    display(newNode);
    free(temp);
    free(temp2);
}

struct Node *head = NULL;
struct Node *second = NULL;
struct Node *third = NULL;
struct Node *newNode = NULL;


int main()
{

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    newNode = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    copy(head, newNode);

    return 0;
}
