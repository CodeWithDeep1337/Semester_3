#include <stdio.h>
#include <stdlib.h>
struct Stack
{
    int data;
    struct Stack *next;
};
struct Stack *head = NULL;
struct Stack *second = NULL;
struct Stack *third = NULL;
struct Stack *fourth = NULL;
struct Stack *five = NULL;
void display()
{
    struct Stack *temp = head;
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

void push(int data)
{
    struct Stack *newNode = (struct Stack *)malloc(sizeof(struct Stack));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    display();
}
void pop()
{
    if (head == NULL)
    {
        printf("Stack Is Empty!!");
        return;
    }
    struct Stack *temp = head;
    head = head->next;
    free(temp);
    display();
}
void peek()
{
    if (head == NULL)
    {
        printf("Stack Is Empty!!");
        return;
    }
    printf("%d", head->data);
}

int main()
{

    head = (struct Stack *)malloc(sizeof(struct Stack));
    second = (struct Stack *)malloc(sizeof(struct Stack));
    third = (struct Stack *)malloc(sizeof(struct Stack));
    fourth = (struct Stack *)malloc(sizeof(struct Stack));
    five = (struct Stack *)malloc(sizeof(struct Stack));

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

    push(5);
    pop();
    peek();

    return 0;
}