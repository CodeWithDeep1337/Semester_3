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
void sort(struct Node *head)
{
    struct Node *temp1 = head;
    struct Node *temp2 = head->next;

    while (temp1 != NULL)
    {
        temp2=temp1->next;

        while (temp2 != NULL)
        {

            if (temp2->data < temp1->data)
            {
                int swap = temp2->data;
                temp2->data = temp1->data;
                temp1->data = swap;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }

    display(head);
}

struct Node *head = NULL;
struct Node *second = NULL;
struct Node *third = NULL;


int main()
{

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
   // newNode = (struct Node *)malloc(sizeof(struct Node));

    head->data = 3;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 1;
    third->next = NULL;

    sort(head);

    return 0;
}
