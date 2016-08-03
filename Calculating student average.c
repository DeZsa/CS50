#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to convert average test score to a letter grade.
char convertGrade(float test_average) { 
    if(test_average >= 90)
        return 'A';
    if(test_average >= 80)
        return 'B';
    if(test_average >= 70)
        return 'C';
    if(test_average >= 60)
        return 'D';
    return 'F';                                                 
}

int main() {
    int i, j, students = 0;
    int tests;
    char name[20];
    char letter_grade;
    float test_score;
    float test_sum = 0;
    double test_average;
    
    j = 0;
    
    // Asks for number of students, then enters loop for information
    printf("Number of students: ");
    scanf("%d", &students);
    
        
    for (i = 0; i < students; i++) {
            printf("\nStudent name %d: ", i + 1);         // i + 1 corrects 0 (from %d) to 1 and so forth. Else, Student name 0: (ZERO?!)
            scanf(" %s", &name);
            fflush(stdin);  /* Redudant */
            printf("Number of test(s) for %s: ", name);                // %s to label student for report, name variable stores student's name
            scanf("%d", &tests);
        
            printf("Enter %d test score(s) for %s: ", tests, name);  
            test_sum = 0; // Must be initialized at 0, else calculations are off
        
        
            // Loop for upcoming prompts for Test score to get average
            for (j = 0; j < tests; j++) {
                scanf("%f", &test_score);
                test_sum += test_score;                         // += adds test scores, and stores value in test_sum
                test_average = test_sum / (float)tests;         // tests variable must be a floating-point number to get decimal, casting float to tests
                letter_grade = convertGrade(test_average);      
            }
    
        
         // Displays output for name, score, grade
            printf("\n%s's Report:\t\tAverage score\t %.2f\t %c\n", name, test_average, letter_grade);
    }
    
return 0;
}