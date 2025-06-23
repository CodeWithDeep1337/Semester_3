#include <stdio.h>


struct Student {
    int roll_no;
    char name[50];
    char branch[30];
    int batch_no;
};

int main() {

    struct Student s1 = {242, "Deep Buddhadev", "CSE", 2025};

   
    struct Student *ptr;

   
    ptr = &s1;

    
    printf("Student Details:\n");
    printf("Roll Number : %d\n", ptr->roll_no);
    printf("Name        : %s\n", (*ptr).name);
    printf("Branch      : %s\n", ptr->branch);
    printf("Batch No.   : %d\n", ptr->batch_no);

    return 0;
}
