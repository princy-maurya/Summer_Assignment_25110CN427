/*Write a program to Create quiz application.*/
#include <stdio.h>

int main() {
    int choice, score = 0;

    printf("********** Welcome to Quiz Application **********\n\n");

    // Question 1
    printf("Q1. Which data type is used to store decimal values in C?\n");
    printf("1. int\n2. float\n3. char\n4. double\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 2 || choice == 4) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is float/double.\n\n");
    }

    // Question 2
    printf("Q2. Which header file is required for printf and scanf?\n");
    printf("1. stdio.h\n2. conio.h\n3. math.h\n4. string.h\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 1) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is stdio.h.\n\n");
    }

    // Question 3
    printf("Q3. Which loop is guaranteed to run at least once?\n");
    printf("1. for loop\n2. while loop\n3. do-while loop\n4. none\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is do-while loop.\n\n");
    }

    // Final Score
    printf("********** Quiz Finished **********\n");
    printf("Your Score: %d out of 3\n", score);

    if(score == 3) {
        printf("Excellent! Perfect score.\n");
    } else if(score == 2) {
        printf("Good job! Keep practicing.\n");
    } else {
        printf("Better luck next time.\n");
    }

    return 0;
}
