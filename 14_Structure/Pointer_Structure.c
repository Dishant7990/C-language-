#include<stdio.h>

    typedef struct Student
    {
        int roll_no;
        char name[30];
        char branch[20];
        int batch;
    }student_t;

    student_t s1;
    student_t *ptr;
int main(void){
    ptr = &s1;
    //Taking input from user
    printf("Enter the Roll Number of Student\n");
    scanf("%d", &ptr->roll_no);
    printf("Enter Name of Student\n");
    scanf("%s", &ptr->name);
    printf("Enter Branch of Student\n");
    scanf("%s", &ptr->branch);
    printf("Enter batch of Student\n");
    scanf("%d", &ptr->batch);
    
    // Displaying details of the student
    printf("\nStudent details are: \n");
 
    printf("Roll No:   %d\n", ptr->roll_no);
    printf("Name:      %s\n", ptr->name);
    printf("Branch:    %s\n", ptr->branch);
    printf("Batch:     %d\n", ptr->batch);
    return 0;
}