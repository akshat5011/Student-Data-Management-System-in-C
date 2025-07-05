# Student-Data-Management-System-in-C

This project is a Student Data Management System implemented in C, created in the first year of college. It demonstrates all basic CRUD (Create, Read, Update, Delete) operations using file handling in C. Each student's data is stored in a separate text file named after their roll number (e.g., `101.txt`).

## Features

- **Add New Student**: Enter details for a new student and save them to a new file. Prevents duplicate roll numbers.
- **View All Students**: List all students and display key information (name, branch, CGPA, etc.).
- **View by Attribute**: Display names along with CGPA, branch, sports items issued, library dues, or short attendance.
- **View Individual Student**: View all saved information for a particular student by entering their roll number.
- **Short Attendance Detection**: Marks students with attendance below 75% as "Short Attendance".
- **Input Validation & Error Handling**: Robust input validation for all entries, including menu choices, roll numbers, CGPA, semester, library dues, and more. Invalid or duplicate entries are rejected with an error message.
- **Exit**: Cleanly exit the program.

## How it Works

- Each student’s data is stored in a file named `{roll_number}.txt`.
- The program reads/writes these files to perform all operations.
- The menu-driven interface lets the user choose what they want to do.
- Attributes such as Name, Semester, Branch, Roll, CGPA, Library Dues, Attendance, and Sports Items are stored and managed.
- The code is structured with modular functions for each type of data operation.

## Menu Options

1. Print the names of all the students
2. Print the names and CGPA of all the students
3. Print the names and Branch of all the students
4. Print the names and Sports Items issued by all the students
5. Print the names and Library dues of all the students
6. Print the names of all the students along with Short-Attendance
7. Print the data of a particular student
8. Enter data of a new student
9. Exit

## File Structure (Per Student)

Each student file (e.g., `101.txt`) has lines like:
```
NAME     :   JohnDoe
SEMESTER :   2
BRANCH   :   CSE
ROLL     :   101
CGPA     :   8.2
LIBRARY DUES : RS.15.00
PRESENT DAYS : 220
% ATTENDANCE : 73.3%
TOTAL WORKING DAYS : 300
SHORT ATTENDANCE(Y/N) : Y
SPORT ITEM ISSUED : Basketball
```

## Steps to Run

1. **Clone the repository**
   ```bash
   git clone https://github.com/akshat5011/Student-Data-Management-System-in-C.git
   cd Student-Data-Management-System-in-C
   ```

2. **Compile the source code**
   ```bash
   gcc PROJECT.c -o student.exe
   ```

3. **Run the executable**
   ```bash
   ./student.exe
   ```
   or double-click `student.exe` on Windows.

## Requirements

- GCC or any standard C compiler
- Windows or Linux (the code uses `system("clear")` for clearing the screen, which may need to be changed to `system("cls")` for Windows).

## Additional Notes for This Version

- **Input Validation**:  
  - All menu and data inputs are checked for validity and range.  
  - For example, semester must be between 1-8, CGPA between 0-10, library dues non-negative, present days between 0 and 300, and roll number positive and unique.
  - If an invalid value is entered, an error message is shown and input is discarded.
  - If you enter an invalid menu option or data, you will be prompted to try again.
- **Duplicate Roll Numbers**:  
  - The program will not allow the creation of a student with a roll number that already exists.
- **No Records**:  
  - If there are no student records, appropriate messages are displayed instead of blank output.
- **Robustness**:  
  - The program avoids crashing on invalid input and provides clear error messages.
- **Program Exit**:  
  - Clean exit with a goodbye message.

---
