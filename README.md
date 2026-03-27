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

#### Technical Implementation:

Top Index: We use an integer top initialized to -1.

Static Array: This version uses a fixed-size array (MAX) for predictable memory usage.

Overflow Protection: The code automatically checks if top == MAX - 1 before allowing a Push to prevent memory errors.

---

## 🚶‍♂️ Queue Implementation in C (Array-based)

This repository contains a robust implementation of the Queue Data Structure using C. This project was developed to understand linear data structures, index management, and the FIFO (First-In, First-Out) principle.

### 🛠️ Features

• Enqueue: Add an element to the "Rear" of the queue.

• Dequeue: Remove an element from the "Front" of the queue.

• Peek/Front: View the element at the front without removing it.

• Full/Empty Checks: Safety checks to prevent memory errors.

### 🧠 Core Logic Explained

A Queue works exactly like a waiting line:

1. The first person to join the line is the first one to be served.

2. New items are added at the Back (Rear).

3. Items are removed from the Front.

#### Technical Implementation:

• Two Pointers: We use front and rear integers to track both ends of the queue.

• Initialization: Both front and rear start at -1.

• FIFO Logic: When we Enqueue, rear increases. When we Dequeue, front increases.

## 💡 Difference to remember:

• Stack: Think of a stack of plates (Last in, First out).

• Queue: Think of a bus stop line (First in, First out).

---

## 📂 Project Structure

stack.c - Contains the full stack logic and a driver program to test operations.

queue.c - Complete source code with Enqueue and Dequeue logic.

README.md - Documentation of the project.

---

## 📝 Author

Github Profile - priyanshusingh280906-hub

Current Focus: Learning Data Structures and Algorithms in C.
