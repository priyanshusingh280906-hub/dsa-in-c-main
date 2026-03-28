# 📝 Personal Expense Tracker in C
A simple yet powerful Command Line Interface (CLI) tool to manage your personal finances. This application allows users to track their income and expenses separately, providing a real-time net balance and financial summary.

## 🌟 Key Features

• Dual Tracking: Separate logs for Income and Expenses to prevent data overlap.

• Categorization: Assign categories (e.g., Salary, Food, Rent) to every transaction.

• Live Financial Summary: Instantly calculate Total Income, Total Spending, and your current Net Balance.

• Safety Limits: Built-in constraints to handle up to 100 transactions in each category.

• Deficit Warning: Visual alerts if your spending exceeds your total income.

## 📊 Logic & Architecture
The application uses a unified struct to define a Transaction, but stores them in two distinct arrays to ensure data persistence within the session.

### Data Flow
1. Input: User enters an amount and a label.
2. Storage: The program saves the entry into the specific incomeList or expenseList array.
3. Processing: The showSummary() function iterates through both arrays to compute the final balance using the formula:
   Net Balance = ⅀Income - ⅀Expenses

## 🛠️ Roadmap (Future Features)
• [ ] Persistent Storage: Save logs to a .csv file for use in Excel.

• [ ] Monthly Budgets: Set spending limits for specific categories.

• [ ] Date Stamping: Track exactly when a transaction occurred.

• [ ] Data Visualization: Simple ASCII bar charts to show spending habits.
