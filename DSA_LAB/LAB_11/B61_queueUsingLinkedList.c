#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int data;
    struct Queue *next;
};
struct Queue *head = NULL;
struct Queue *second = NULL;
struct Queue *third = NULL;
struct Queue *fourth = NULL;
struct Queue *five = NULL;
void display()
{
    struct Queue *temp = head;
    if (!temp)
    {
        printf("List is empty\n");
        return;
    }
    while (temp)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void offer(int data)
{
    struct Queue *newNode = (struct Queue *)malloc(sizeof(struct Queue));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }

    else
    {
        struct Queue *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    display(head);
}
void poll()
{
    if (head == NULL)
    {
        printf("Queue Is Empty!!");
        return;
    }
    struct Queue *temp = head;
    head = head->next;
    free(temp);
    display();
}
void peek()
{
    if (head == NULL)
    {
        printf("Queue Is Empty!!");
        return;
    }
    printf("%d", head->data);
}

int main()
{

    head = (struct Queue *)malloc(sizeof(struct Queue));
    second = (struct Queue *)malloc(sizeof(struct Queue));
    third = (struct Queue *)malloc(sizeof(struct Queue));
    fourth = (struct Queue *)malloc(sizeof(struct Queue));
    five = (struct Queue *)malloc(sizeof(struct Queue));

    head->data = 2;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 3;
    fourth->next = five;

    five->data = 1;
    five->next = NULL;

    offer(5);
    poll();
    peek();

    return 0;
}