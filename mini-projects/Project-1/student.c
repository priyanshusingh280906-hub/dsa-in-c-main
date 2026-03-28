#include <stdio.h>
#include <string.h>


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

void displayStudents() {
    if (count == 0) {
        printf("No students found\n");
        return;
    }

    printf("\nStudent List:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Marks: %.2f\n",
               students[i].id,
               students[i].name,
               students[i].marks);
    }
}

void searchStudent() {
    int choice, found = 0;
    printf("\nSearch by:\n1. ID\n2. Name\n3. Marks\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int id;
        printf("Enter ID: ");
        scanf("%d", &id);
        for (int i = 0; i < count; i++) {
            if (students[i].id == id) {
                printf("Found: %s (Marks: %.2f)\n", students[i].name, students[i].marks);
                found = 1;
            }
        }
    } else if (choice == 2) {
        char name[50];
        printf("Enter Name: ");
        scanf("%s", name);
        for (int i = 0; i < count; i++) {
            if (strcmp(students[i].name, name) == 0) {
                printf("Found: ID %d (Marks: %.2f)\n", students[i].id, students[i].marks);
                found = 1;
            }
        }
    } else if (choice == 3) {
        float marks;
        printf("Enter Marks: ");
        scanf("%f", &marks);
        for (int i = 0; i < count; i++) {
            if (students[i].marks == marks) {
                printf("Found: ID %d, Name: %s\n", students[i].id, students[i].name);
                found = 1;
            }
        }
    }

    if (!found) printf("No matching student found.\n");
}

void deleteStudent() {
    int choice, indexToDelete = -1;
    printf("\nDelete by:\n1. ID\n2. Name\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int id;
        printf("Enter ID: ");
        scanf("%d", &id);
        for (int i = 0; i < count; i++) {
            if (students[i].id == id) { indexToDelete = i; break; }
        }
    } else if (choice == 2) {
        char name[50];
        printf("Enter Name: ");
        scanf("%s", name);
        for (int i = 0; i < count; i++) {
            if (strcmp(students[i].name, name) == 0) { indexToDelete = i; break; }
        }
    }

    if (indexToDelete != -1) {
        for (int j = indexToDelete; j < count - 1; j++) {
            students[j] = students[j + 1];
        }
        count--;
        printf("Student deleted successfully.\n");
    } else {
        printf("Student not found.\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Student Management ---\n");
        printf("1. Add Student\n2. Display Students\n3. Search Student\n4. Delete Student\n5. Exit\n");
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
                deleteStudent();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}