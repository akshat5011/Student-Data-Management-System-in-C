// including libraries
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// list of all the functions
void file_read(int roll);
int file_null(int roll);
void file_read_name(int roll, char *result);
void file_read_semester(int roll, char *result);
void file_read_branch(int roll, char *result);
void file_read_cgpa(int roll, char *result);
void file_read_libdues(int roll, char *result);
void file_read_presentdays(int roll, char *result);
void file_read_short_attendance(int roll, char *result);
void file_read_sportitems(int roll, char *result);
void file_write_data(int new_roll);

// function to read the whole data of a student
void file_read(int roll)
{
    char filename[20];

    sprintf(filename, "%d.txt", roll);

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("File not found\n");
        return;
    }

    char line[100];

    while (fgets(line, sizeof(line), file))
    {
        printf("%s", line);
    }

    fclose(file);
}

// Checking if file is null or not
int file_null(int roll)
{
    char filename[20];

    sprintf(filename, "%d.txt", roll);

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        return 1;
    }
    fclose(file);
    return 0;
}

// Function to read the name of the student
void file_read_name(int roll, char *result)
{
    char filename[20];
    sprintf(filename, "%d.txt", roll);

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("File not found\n");
        strcpy(result, "N/A");
        return;
    }

    char line[100];
    int lineCount = 0;
    while (fgets(line, sizeof(line), file))
    {
        lineCount++;
        if (lineCount == 1)
        {
            int charCount = 0;
            int i = 0;
            int j = 0;

            while (line[i] != '\0')
            {
                if (charCount >= 13)
                {
                    result[j] = line[i];
                    j++;
                }
                i++;
                charCount++;
            }
            result[j] = '\0';
            break;
        }
    }
    fclose(file);
}

// Function to read the semester of the student
void file_read_semester(int roll, char *result)
{
    char filename[20];
    sprintf(filename, "%d.txt", roll);

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("File not found\n");
        strcpy(result, "N/A");
        return;
    }

    char line[100];
    int lineCount = 0;
    while (fgets(line, sizeof(line), file))
    {
        lineCount++;
        if (lineCount == 2)
        {
            int charCount = 0;
            int i = 0;
            int j = 0;

            while (line[i] != '\0')
            {
                if (charCount >= 13)
                {
                    result[j] = line[i];
                    j++;
                }
                i++;
                charCount++;
            }

            result[j] = '\0';
            break;
        }
    }
    fclose(file);
}

// Function to read the branch of the student
void file_read_branch(int roll, char *result)
{
    char filename[20];
    sprintf(filename, "%d.txt", roll);

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("File not found\n");
        strcpy(result, "N/A");
        return;
    }

    char line[100];
    int lineCount = 0;

    while (fgets(line, sizeof(line), file))
    {
        lineCount++;
        if (lineCount == 3)
        {
            int charCount = 0;
            int i = 0;
            int j = 0;

            while (line[i] != '\0')
            {
                if (charCount >= 13)
                {
                    result[j] = line[i];
                    j++;
                }
                i++;
                charCount++;
            }

            result[j] = '\0';
            break;
        }
    }
    fclose(file);
}

// Function to read the cgpa of the student
void file_read_cgpa(int roll, char *result)
{
    char filename[20];
    sprintf(filename, "%d.txt", roll);

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("File not found\n");
        strcpy(result, "N/A");
        return;
    }

    char line[100];
    int lineCount = 0;

    while (fgets(line, sizeof(line), file))
    {
        lineCount++;
        if (lineCount == 5)
        {
            int charCount = 0;
            int i = 0;
            int j = 0;

            while (line[i] != '\0')
            {
                if (charCount >= 13)
                {
                    result[j] = line[i];
                    j++;
                }
                i++;
                charCount++;
            }

            result[j] = '\0';
            break;
        }
    }
    fclose(file);
}

// Function to read the library dues of the student
void file_read_libdues(int roll, char *result)
{
    char filename[20];
    sprintf(filename, "%d.txt", roll);

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("File not found\n");
        strcpy(result, "N/A");
        return;
    }

    char line[100];
    int lineCount = 0;

    while (fgets(line, sizeof(line), file))
    {
        lineCount++;
        if (lineCount == 6)
        {
            int charCount = 0;
            int i = 0;
            int j = 0;

            while (line[i] != '\0')
            {
                if (charCount >= 15)
                {
                    result[j] = line[i];
                    j++;
                }
                i++;
                charCount++;
            }

            result[j] = '\0';
            break;
        }
    }

    fclose(file);
}

// Function to read the present days of the student
void file_read_presentdays(int roll, char *result)
{
    char filename[20];
    sprintf(filename, "%d.txt", roll);

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("File not found\n");
        strcpy(result, "N/A");
        return;
    }

    char line[100];
    int lineCount = 0;

    while (fgets(line, sizeof(line), file))
    {
        lineCount++;
        if (lineCount == 7)
        {
            int charCount = 0;
            int i = 0;
            int j = 0;

            while (line[i] != '\0')
            {
                if (charCount >= 16)
                {
                    result[j] = line[i];
                    j++;
                }
                i++;
                charCount++;
            }

            result[j] = '\0';
            break;
        }
    }
    fclose(file);
}

// Function to read the short attendance of the student
void file_read_short_attendance(int roll, char *result)
{
    char filename[20];
    sprintf(filename, "%d.txt", roll);

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("File not found\n");
        strcpy(result, "N/A");
        return;
    }

    char line[100];
    int lineCount = 0;

    while (fgets(line, sizeof(line), file))
    {
        lineCount++;
        if (lineCount == 10)
        {
            int charCount = 0;
            int i = 0;
            int j = 0;

            while (line[i] != '\0')
            {
                if (charCount >= 24)
                {
                    result[j] = line[i];
                    j++;
                }
                i++;
                charCount++;
            }

            result[j] = '\0';
            break;
        }
    }
    fclose(file);
}

// Function to read the sport items issued by the student
void file_read_sportitems(int roll, char *result)
{
    char filename[20];
    sprintf(filename, "%d.txt", roll);

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("File not found\n");
        strcpy(result, "N/A");
        return;
    }
    else{
        char line[100];
        int lineCount = 0;

        while (fgets(line, sizeof(line), file))
        {
            lineCount++;
            if (lineCount == 11)
            {
                int charCount = 0;
                int i = 0;
                int j = 0;

                while (line[i] != '\0')
                {
                    if (charCount >= 20)
                    {
                        result[j] = line[i];
                        j++;
                    }
                    i++;
                    charCount++;
                }

                result[j] = '\0';
                break;
            }
        }
        fclose(file);
    }
}

// Function to enter data of a new student
void file_write_data(int new_roll)
{
    char filename[50];
    sprintf(filename, "%d.txt", new_roll);

    FILE *file;

    char name[50];
    int semester;
    char branch[50];
    int roll;
    float cgpa;
    float librarydues;
    int presentdays;
    float attendancepercentage;
    int totalworkingdays = 300;
    char shortattendance;
    char sportitem[50];
    
    // Check if file already exists
    if (!file_null(new_roll)) {
        printf("Error: Student with roll number %d already exists!\n", new_roll);
        return;
    }
    
    printf("Enter the details of student - ");
    printf("\nNAME : ");
    if (scanf("%s", name) != 1) {
        printf("Error: Invalid name input\n");
        return;
    }
    
    printf("SEMESTER : ");
    if (scanf("%d", &semester) != 1 || semester < 1 || semester > 8) {
        printf("Error: Invalid semester input (should be 1-8)\n");
        return;
    }
    
    printf("BRANCH : ");
    if (scanf("%s", branch) != 1) {
        printf("Error: Invalid branch input\n");
        return;
    }
    
    printf("CGPA : ");
    if (scanf("%f", &cgpa) != 1 || cgpa < 0 || cgpa > 10) {
        printf("Error: Invalid CGPA input (should be 0-10)\n");
        return;
    }
    
    printf("LIBRARY DUES : ");
    if (scanf("%f", &librarydues) != 1 || librarydues < 0) {
        printf("Error: Invalid library dues input (should be non-negative)\n");
        return;
    }
    
    printf("PRESENT DAYS : ");
    if (scanf("%d", &presentdays) != 1 || presentdays < 0 || presentdays > totalworkingdays) {
        printf("Error: Invalid present days input (should be 0-%d)\n", totalworkingdays);
        return;
    }
    
    printf("SPORT ITEMS : ");
    if (scanf("%s", sportitem) != 1) {
        printf("Error: Invalid sport items input\n");
        return;
    }
    
    attendancepercentage = (float)presentdays / totalworkingdays;

    if(attendancepercentage < 0.75){
        shortattendance='Y';
    }
    else{
        shortattendance='N';
    }
    
    // Open the file in write mode
    file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error: Unable to open the file for writing.\n");
        return;
    }

    // Write the data to the file
    if (fprintf(file, "NAME     :   %s\n", name) < 0 ||
        fprintf(file, "SEMESTER :   %d\n", semester) < 0 ||
        fprintf(file, "BRANCH   :   %s\n", branch) < 0 ||
        fprintf(file, "ROLL     :   %d\n", new_roll) < 0 ||
        fprintf(file, "CGPA     :   %.1f\n", cgpa) < 0 ||
        fprintf(file, "LIBRARY DUES : RS.%.2f\n", librarydues) < 0 ||
        fprintf(file, "PRESENT DAYS : %d\n", presentdays) < 0 ||
        fprintf(file, "%% ATTENDANCE : %.1f%%\n", attendancepercentage * 100) < 0 ||
        fprintf(file, "TOTAL WORKING DAYS : %d\n", totalworkingdays) < 0 ||
        fprintf(file, "SHORT ATTENDANCE(Y/N) : %c\n", shortattendance) < 0 ||
        fprintf(file, "SPORT ITEM ISSUED : %s\n", sportitem) < 0) {
        printf("Error: Failed to write data to file\n");
        fclose(file);
        return;
    }

    // Close the file
    fclose(file);

    printf("Data written to the file successfully.\n");
}

int main()
{
    int roll = 100;
    char data1[10], data2[10];
    int choice = 0;
    int count = 1;
    char more_choice;
    int num;
    char c='y';
    
    // displaying menu
    while(c=='y' || c=='Y'){
        system("clear");
        printf("*--------------------*---------------------*-----------------------*-----------------------*------------------------*------------------------*");
        printf("\nMENU : \n");
        printf("\n1.Print the names of all the students\n");
        printf("\n2.Print the names and CGPA of all the students\n");
        printf("\n3.Print the names and Branch of all the students\n");
        printf("\n4.Print the names and Sports Items issued by all the students\n");
        printf("\n5.Print the names and Library dues of all the students\n");
        printf("\n6.Print the names of all the students along with Short-Attendance\n");
        printf("\n7.Print the data of a particular student\n");
        printf("\n8.Enter data of a new student\n");
        printf("\n9. Exit\n");
        printf("*--------------------*---------------------*-----------------------*-----------------------*------------------------*------------------------*");
        printf("\nEnter the choice : ");
        
        // Input validation for menu choice
        if (scanf("%d", &choice) != 1) {
            printf("Error: Invalid input! Please enter a valid number.\n");
            // Clear input buffer
            while(getchar() != '\n');
            printf("Press any key to continue...\n");
            getchar();
            continue;
        }

        // counting the total number of files and assigning it to num
        count = 1;
        while (!file_null(count))
        {
            count += 1;
        }
        num = count - 1;

        // making various cases according to the choice entered
        if (choice == 1)
        {
            if (num == 0) {
                printf("\nNo student records found.\n");
            } else {
                printf("\nThe names of the Students are : \n");
                for (int i = 1; i <= num; i++)
                {
                    file_read_name(i, data1);
                    printf("%s", data1);
                    printf("\n");
                }
            }
        }
        else if (choice == 2)
        {
            if (num == 0) {
                printf("\nNo student records found.\n");
            } else {
                printf("\nThe names and CGPA of the Students are: \n");
                printf("------------------------------------\n");

                for (size_t i = 1; i <= num; i++)
                {
                    file_read_name(i, data1);
                    file_read_cgpa(i, data2);
                    printf("NAME : %sCGPA :  %s",data1,data2);
                    printf("------------------------------------\n");
                }
            }
        }
        else if (choice == 3)
        {
            if (num == 0) {
                printf("\nNo student records found.\n");
            } else {
                // Array to store branch information for each student
                char branchData[num][50];

                // Read and store branch information for all students
                for (size_t i = 1; i <= num; i++)
                {
                    file_read_branch(i, branchData[i - 1]);
                }

                printf("\nThe names and branch of the Students are \n");
                printf("------------------------------------\n");
                for (size_t i = 1; i <= num; i++)
                {
                    file_read_name(i, data1);
                    printf("NAME : %sBRANCH : %s\n", data1, branchData[i - 1]);
                    printf("------------------------------------\n");
                }
            }
        }
        else if (choice == 4)
        {
            if (num == 0) {
                printf("\nNo student records found.\n");
            } else {
                // Array to store sports information for each student
                char sportsData[num][50];

                // Read and store sports information for all students
                for (size_t i = 1; i <= num; i++)
                {
                    file_read_sportitems(i, sportsData[i - 1]);
                }

                printf("\nThe names and sports items issued by the Students are \n");
                printf("------------------------------------\n");
                for (size_t i = 1; i <= num; i++)
                {
                    file_read_name(i, data1);
                    printf("\nNAME : %sSPORTS ITEMS : %s\n", data1, sportsData[i - 1]);
                    printf("------------------------------------\n");
                }
            }
        }
        else if (choice == 5)
        {
            if (num == 0) {
                printf("\nNo student records found.\n");
            } else {
                // Array to store library information for each student
                char libraryData[num][10];

                // Read and store library information for all students
                for (size_t i = 1; i <= num; i++)
                {
                    file_read_libdues(i, libraryData[i - 1]);
                }

                printf("\nThe names and library dues of the Students are \n");
                printf("------------------------------------\n");
                for (size_t i = 1; i <= num; i++)
                {
                    file_read_name(i, data1);
                    printf("NAME : %sLIBRARY DUES : %s\n", data1, libraryData[i - 1]);
                    printf("------------------------------------\n");
                }
            }
        }
        else if (choice == 6)
        {
            if (num == 0) {
                printf("\nNo student records found.\n");
            } else {
                // Array to store short-attendance information for each student
                char shortData[num][10];

                // Read and store short-attendance information for all students
                for (size_t i = 1; i <= num; i++)
                {
                    file_read_short_attendance(i, shortData[i - 1]);
                }

                printf("\nThe names of the students with short attendance are:\n");
                printf("------------------------------------\n");
                int shortAttendanceCount = 0;
                for (size_t i = 1; i <= num; i++)
                { 
                    file_read_name(i, data1);
                    if (strstr(shortData[i-1],"Y") || strstr(shortData[i-1],"yes") || strstr(shortData[i-1],"y")){
                        printf("NAME : %sSHORT ATTENDANCE : %s\n", data1, shortData[i - 1]);
                        printf("------------------------------------\n");
                        shortAttendanceCount++;
                    }
                }
                if (shortAttendanceCount == 0) {
                    printf("No students with short attendance found.\n");
                }
            }
        }
        else if (choice == 7)
        {
            int roll;
            printf("Enter the roll number of the student : ");
            if (scanf("%d", &roll) != 1) {
                printf("Error: Invalid roll number input\n");
                while(getchar() != '\n'); // Clear input buffer
            } else if (file_null(roll)) {
                printf("Error: Student with roll number %d not found.\n", roll);
            } else {
                printf("------------------------------------\n");
                file_read(roll);
                printf("\n------------------------------------\n");
            }
        }
        else if (choice == 8)
        {
            // New text file is created based upon roll number
            int new_roll;
            printf("\nEnter the roll number : \n");
            if (scanf("%d", &new_roll) != 1) {
                printf("Error: Invalid roll number input\n");
                while(getchar() != '\n'); // Clear input buffer
            } else if (new_roll <= 0) {
                printf("Error: Roll number should be positive\n");
            } else {
                file_write_data(new_roll);
            }
        }
        else if(choice == 9)
        {
            printf("Exiting program. Goodbye!\n");
            return 0;
        }
        else
        {
            printf("Error: Invalid choice! Please select a valid option (1-9).\n");
        }
        
        printf("********************************************");
        printf("\nDO YOU WANT TO CONTINUE (Y/N)  :  ");
        
        // Input validation for continue choice
        getchar(); // consume newline
        char temp = getchar();
        if (temp != 'y' && temp != 'Y' && temp != 'n' && temp != 'N') {
            printf("Invalid input! Assuming 'N' (No)\n");
            c = 'n';
        } else {
            c = temp;
        }
    }
    
    printf("Program terminated.\n");
    return 0;
}