# DSA in C

This repository contains basic Data Structures implementations in C.

---

## Topics Covered
- Stack
- Queue (coming soon)
- Linked List (coming soon)
 
---

## 📚 Stack Implementation in C (Array-based)
This repository contains a professional implementation of the Stack Data Structure using the C programming language. I built this to master memory management, pointers, and the LIFO (Last-In, First-Out) principle.

### 🛠️ Features

• Push: Efficiently add elements to the top.

• Pop: Securely remove elements from the top with Underflow checks.

• Peek: View the current top element without modifying the stack.

• Status Checks: Built-in functions for isEmpty() and isFull().

### 🧠 Core Logic Explained

A Stack is a linear data structure. Think of it like a stack of books:

1. You can only add a book to the top.

2. You can only remove a book from the top.

3. The last book you put down is the first one you pick up.

### Technical Implementation:

Top Index: We use an integer top initialized to -1.

Static Array: This version uses a fixed-size array (MAX) for predictable memory usage.

Overflow Protection: The code automatically checks if top == MAX - 1 before allowing a Push to prevent memory errors.

---

## 📂 Project Structure

stack.c - Contains the full stack logic and a driver program to test operations.

README.md - Documentation of the project.

---

## 📝 Author

Github Profile - priyanshusingh280906-hub

Current Focus: Learning Data Structures and Algorithms in C.
