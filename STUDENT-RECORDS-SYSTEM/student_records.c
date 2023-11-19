//
// File: student_records.c
// Language: C
// Summary: This file contains functions to manage student records, including adding, editing, displaying, deleting, searching, and sorting student records.

#include "student_records.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Structure to store student records
struct student_records {
    int student_id;
    char student_first_name[20];
    char student_last_name[20];
    int student_age;
    int student_phone;
    char student_email[50];
    char student_address[50];
    char student_gender[10];
    char class[10];
};

// Function declarations
void addStudentRecord();

void editStudentRecord();

void deleteStudentRecord();

void searchStudentRecord();

void sortStudentRecord();

void displayStudentRecords();

// Main function for managing student records
int record_student() {
    int choice;
    while (1) {
        printf("\n");
        printf("\t\t\t\t[*************** STUDENT RECORD SYSTEM ***************]\n");
        printf("\n");

        printf("\t\t\t\t\t\t 1. Add student record\n");
        printf("\t\t\t\t\t\t 2. Display student record\n");
        printf("\t\t\t\t\t\t 3. Edit student record\n");
        printf("\t\t\t\t\t\t 4. Delete student record\n");
        printf("\t\t\t\t\t\t 5. Search student record\n");
        printf("\t\t\t\t\t\t 6. Sort student record\n");
        printf("\t\t\t\t\t\t 8. Exit\n");

        printf("\n");
        printf("\t\t\t\t[*****************************************************]\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                system("clear");
                addStudentRecord();
                break;
            case 2:
                displayStudentRecords();
                break;
            case 3:
                editStudentRecord();
                break;
            case 4:
                deleteStudentRecord();
                break;
            case 5:
                searchStudentRecord();
                break;
            case 6:
                sortStudentRecord();
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}

// Function to display all student records
void displayStudentRecords() {
    printf("Inside displays\n");
}

// Function to sort student records
void sortStudentRecord() {
    printf("Inside sort\n");
}

// Function to search for a student record
void searchStudentRecord() {
    printf("Inside search\n");
}

// Function to delete a student record
void deleteStudentRecord() {
    printf("Inside delete\n");
}

// Function to add a new student record
void addStudentRecord() {
    printf("inside add\n");
}

// Function to edit an existing student record
void editStudentRecord() {
    printf("Inside edit\n");
}