# Student Record Management System in C

Hey everyone! 👋

This is one of my C programming projects, **Student Record Management System**.

I developed this project to practice and apply the concepts I learned in C programming. The main purpose of this project is to manage student records using a singly linked list.

Instead of storing all the records in a fixed-size array, I used dynamic memory allocation to create student nodes whenever a new record is added.

I also implemented file handling so that the student records can be saved in a file and loaded again when required.

## About the Project

The program is menu-driven, so users can select different operations from the menu and manage student records easily.

Each student record contains:
- Roll number
- Name
- Percentage

The roll number is automatically assigned by the program, and the percentage is validated before adding the record.

## Features

- Add a new student record
- Automatically assign the smallest available positive roll number
- Delete a student using roll number or name
- Modify student details
- Display all student records
- Save student records in a file
- Load records from a file
- Sort students by name
- Sort students by percentage
- Reverse the linked list
- Delete all student records

## Concepts Used

While developing this project, I worked with:

- Structures
- Pointers
- Singly Linked List
- Dynamic Memory Allocation (`malloc()` and `free()`)
- File Handling (`fopen()`, `fscanf()`, `fprintf()`, `fclose()`)
- Functions and modular programming
- Searching and sorting
- String handling

## Project Files

I divided the program into multiple source files to keep the code organized.

- `stud_main.c` – Main function and menu handling
- `stud_add.c` – Adding student records
- `stud_del.c` – Deleting student records
- `stud_mod.c` – Modifying student details
- `stud_save.c` – Saving records into a file
- `stud_show.c` – Displaying student records
- `free_sort_rev.c` – Freeing memory, sorting and reversing the linked list
- `student.h` – Structure definition and function declarations
- `student.dat` – File used to store student records

## How to Compile

Make sure GCC is installed and open the terminal in the project directory.

```bash
gcc *.c -o student
```

## How to Run

```bash
./student
```

## What I Learned

Working on this project helped me understand how linked lists work in real programs. I got more practice with pointers, memory allocation, file handling and dividing a program into multiple files.

I also learned how important it is to handle invalid inputs, manage memory properly and test different situations while developing a program.

This project was a good learning experience for me and helped me improve my C programming and problem-solving skills.

## Author

**Shainesh Palange**

Electronics and Telecommunication Engineering  
Embedded Systems

GitHub: https://github.com/shainesh5411
