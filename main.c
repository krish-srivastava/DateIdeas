// This is to do some basic functionality 

#include <stdio.h> 
#include <string.h>


int main(void) {


    // Introductory message. 

    char choice;

    printf("Welcome to Date Night Ideas");

    // Scan the choice being selected
    scanf("%c", &choice);
    char eatTimes = 'e'; 
    char eatChoice = 'c';
    
    int amountTimes = 0;
    int maxAmountTimes = 2;
    
    // Input the amount of times eating out has occurred. 
    // Set letter for inputting amount of times eating has occurred. 
        if (choice.isEquals(eatTimes)) {
            if (amountTimes.isEquals(maxAmountTimes)) {
                printf("You have eaten enough times this week!\n");
                return 1; 
            }
            amountTimes++;
        }
        else if (choice.isEquals(eatChoice)) {
            
        }
    

        // Store into an array to note down the amount of times something has been eaten. 
    
    
    scanf()

    return 0; 

}