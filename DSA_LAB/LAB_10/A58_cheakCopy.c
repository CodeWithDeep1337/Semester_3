#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void cheakCopy(struct Node* head1,struct Node* head2){

    struct Node* temp1=head1;
      struct Node* temp2=head2;
    int count=0;
      while(temp1!=NULL && temp2!=NULL){
        if(temp1->data == temp2->data){
            temp1=temp1->next;
            temp2=temp2->next;
            count=1;
        }
        else{
            count=0;
            break;
        }

      }
   if(count==1) printf("same");
   else printf("not same");

}

 struct Node* head = NULL;
 struct Node* head1=NULL;
    struct Node* second1 = NULL;
    struct Node* third1 = NULL;
      struct Node* third2 = NULL;
     struct Node* head2=NULL;
    struct Node* second2 = NULL;
    struct Node* third3 = NULL;

int main() {
   
   

   
    head1 = (struct Node*)malloc(sizeof(struct Node));
    second1 = (struct Node*)malloc(sizeof(struct Node));
    third1 = (struct Node*)malloc(sizeof(struct Node));

    head1->data = 1;       
    head1->next = second1;

    second1->data = 2;    
    second1->next = third1;

    third1->data = 3;      
    third1->next = NULL;

     head2 = (struct Node*)malloc(sizeof(struct Node));
    second2 = (struct Node*)malloc(sizeof(struct Node));
    third2 = (struct Node*)malloc(sizeof(struct Node));

    head2->data = 1;       
    head2->next = second2;

    second2->data = 2;    
    second2->next = third2;

    third2->data = 3;      
    third2->next = NULL;


   
   cheakCopy(head1,head2);
    

  

    return 0;
}
