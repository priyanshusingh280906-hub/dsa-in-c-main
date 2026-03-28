# 🧑🏼‍🎓 Student Management System in C 

A lightweight, menu-driven CLI (Command Line Interface) application designed to manage student records. This project demonstrates core C programming concepts like Structures, Arrays, Loops, and String Manipulation.

## 🚀 Features

• Add Students: Create new records with unique IDs, names, and marks.

• Flexible Search: Find students by ID, Name, or Exact Marks.

• Smart Delete: Remove records using either the Student ID or Name.

• List View: Display all current students in a clean, tabular format.

• Data Integrity: Includes checks to prevent array overflow (maximum 100 students).

## 🛠️ Logic Overview

#### The Structure

The system uses a struct to group related data types together:

#### Search & Delete Flow

The application uses a sub-menu system. Instead of forcing a specific search method, the user is prompted to choose their known criteria, making the UX much more intuitive.

## 📈 Future Enhancements

• [ ] Persistence: Add File I/O to save data to a .txt file.

• [ ] Sorting: Implement Bubble Sort to arrange students by highest marks.

• [ ] Input Validation: Handle names with spaces and prevent duplicate IDs.
