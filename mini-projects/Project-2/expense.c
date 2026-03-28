#include <stdio.h>

struct Expense {
    float amount;
    char category[50];
};

struct Expense expenses[100];
int count = 0;