#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

struct Student students[100];
int count = 0;

void addStudent() {
    printf("Enter ID: ");
    scanf("%d", &students[count].id);

    printf("Enter Name: ");
    scanf("%s", students[count].name);

    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);

    count++;
    printf("Student added successfully\n");
}

void searchStudent() {
    int id, found = 0;

    printf("Enter ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Found: %s with marks %.2f\n",
                   students[i].name,
                   students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Student Management ---\n");
        printf("1. Add Student\n2. Display Students\n3. Search Student\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}