#include <stdio.h>
#include <string.h>

struct Transaction
{
    float amount;
    char category[50];
};

struct Transaction incomeList[100];
struct Transaction expenseList[100];

int incomeCount = 0;
int expenseCount = 0;

void addIncome()
{
    if (incomeCount < 100)
    {
        printf("Enter Income Amount: ");
        scanf("%f", &incomeList[incomeCount].amount);
        printf("Enter Source/Category: ");
        scanf("%s", incomeList[incomeCount].category);
        incomeCount++;
        printf("Income added!\n");
    }
    else
    {
        printf("Income log full!\n");
    }
}

void addExpense()
{
    if (expenseCount < 100)
    {
        printf("Enter Expense Amount: ");
        scanf("%f", &expenseList[expenseCount].amount);
        printf("Enter Category: ");
        scanf("%s", expenseList[expenseCount].category);
        expenseCount++;
        printf("Expense added!\n");
    }
    else
    {
        printf("Expense log full!\n");
    }
}

void viewIncome()
{
    printf("\n--- Income History ---\n");
    if (incomeCount == 0)
        printf("No income recorded.\n");
    for (int i = 0; i < incomeCount; i++)
    {
        printf("Amount: %.2f | Source: %s\n", incomeList[i].amount, incomeList[i].category);
    }
}

void viewExpenses()
{
    printf("\n--- Expense History ---\n");
    if (expenseCount == 0)
        printf("No expenses recorded.\n");
    for (int i = 0; i < expenseCount; i++)
    {
        printf("Amount: %.2f | Category: %s\n", expenseList[i].amount, expenseList[i].category);
    }
}

void showSummary()
{
    float totalIncome = 0;
    float totalSpent = 0;

    for (int i = 0; i < incomeCount; i++)
        totalIncome += incomeList[i].amount;
    for (int i = 0; i < expenseCount; i++)
        totalSpent += expenseList[i].amount;

    printf("\n--- Financial Summary ---\n");
    printf("Total Income:   %.2f\n", totalIncome);
    printf("Total Spending: %.2f\n", totalSpent);
    printf("Net Balance:    %.2f\n", totalIncome - totalSpent);

    if (totalSpent > totalIncome)
    {
        printf("Warning: You are in a deficit!\n");
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n--- Expense Tracker ---\n");
        printf("1. Add Income\n2. Add Expense\n3. View Income\n4. View Expenses\n5. Summary\n6. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addIncome();
            break;
        case 2:
            addExpense();
            break;
        case 3:
            viewIncome();
            break;
        case 4:
            viewExpenses();
            break;
        case 5:
            showSummary();
            break;
        case 6:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
}
