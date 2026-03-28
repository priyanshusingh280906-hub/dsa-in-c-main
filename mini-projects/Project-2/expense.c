#include <stdio.h>

struct Expense {
    float amount;
    char category[50];
};

struct Expense expenses[100];
int count = 0;

void addExpense() {
    if (count < 100) {
        printf("Enter amount: ");
        scanf("%f", &expenses[count].amount);
        printf("Enter category: ");
        scanf("%s", expenses[count].category);
        count++;
    } else {
        printf("Expense limit reached\n");
    }
}

void viewExpenses() {
    printf("\n--- Expenses ---\n");
    for (int i = 0; i < count; i++) {
        printf("Amount: %.2f, Category: %s\n", expenses[i].amount, expenses[i].category);
    }
}

void totalSpending() {
    float total = 0;
    for (int i = 0; i < count; i++) {
        total += expenses[i].amount;
    }
    printf("Total Spending: %.2f\n", total);
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Expense Tracker ---\n");
        printf("1. Add Expense\n2. View Expenses\n3. Total Spending\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addExpense();
                break;
            case 2:
                viewExpenses();
                break;
            case 3:
                totalSpending();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}