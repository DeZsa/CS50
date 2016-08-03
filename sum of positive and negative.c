#include <stdio.h>

int main() { 
    int posNum = 0,                
        negNum = 0,
        num = 0; 
    
printf("This program takes the sum of positive and negative numbers from a user's input in a loop. \n\n HINT: To end the program, press 0 and hit [ENTER].\n\n");                    // Objective of program

printf("Enter an integer: ");      
scanf("%d", &num);   // User input must be an integer!

    // Loop to ask for integer continously. If not an integer, loop repeats Line 17 until CTRL+C
while (num != 0) {
    
    printf("Another one: ");
    scanf("%d", &num); 
    
    // Condition for positive number
    if (num > 0) {                 
        posNum = posNum + num; 
    } 
    
    // Condition for negative number
    if (num < 0){
        negNum = negNum + num; 
    } 
} 

    // User presses 0
printf("You have successfully ended the program. Here are your results:\n\n"); 
    
printf("The positive sum of your input is %d.\n", posNum); 
printf("The negative sum of your input is %d.\n", negNum);

return 0; 
} 