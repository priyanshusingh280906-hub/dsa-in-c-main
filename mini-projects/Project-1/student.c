#include <stdio.h>

struct student
{
    int id;
    char name[50];
    float marks;
};

int count=0;

int add_student(struct student s)
{
    count++;
    printf("Enter student id:- \n");
    scanf("%d", &s.id);
    printf("Enter student name:- \n");
    scanf("%s", s.name);
    printf("Enter student marks:- \n");
    scanf("%f", &s.marks);
    printf("Student added successfully!\n");
    return count;
}

int display_students(struct student s)
{
    printf("Student id: %d\n", s.id);
    printf("Student name: %s\n", s.name);
    printf("Student marks: %.2f\n", s.marks);
    return 0;
}