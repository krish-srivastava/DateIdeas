// This is to do some basic functionality 

#include <stdio.h> 
#include <string.h>


int main(void) {

    // Introductory message. 
    char choice;
    printf("Welcome to Date Night Ideas\n");

    // Scan the choice being selected
    printf("Please enter your option\n");
    printf("e - Log the amount of times you have eaten outside\n");
    scanf("%c", &choice);
    char eatTimes = 'e'; 
    char eatChoice = 'c';
    
    static int amountTimes = 0; 
    int maxAmountTimes = 2;

    if (choice == eatTimes) {
        printf("%d\n", amountTimes);
        if (amountTimes == maxAmountTimes) {
            printf("You have eaten enough times this week!\n");
            return 1;
        }
        amountTimes++;
    }
    else if (choice == eatChoice) {
        printf("This feature is still being built out, please be patient!");
    }
    else {
        printf("Please enter a valid option");
    }
        
    return 0;
}