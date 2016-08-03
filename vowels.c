#include <stdio.h>

// Declaring variables for integers and characters
int main () {
	char input;
    int words;
    int blanks = 0;
    int a = 0, e = 0, i = 0, o = 0, u = 0; // Straight line because too many lines if enter
	

printf("Type a sentence or two: ");
    
    
// Creating loop, getting user input. Counting individual vowels in lines 13-22; 
while((input = getchar()) != '\n') {       
    if(input == 'a' || input == 'A')
        a++;
    if(input == 'e' || input == 'E')
        e++;
    if(input == 'i' || input == 'I')
        i++;
    if(input == 'o' || input == 'O')
        o++;
    if(input == 'u' || input == 'U')
        u++;
                
    if(input == ' ') 
        blanks++; // Counting spaces between words
}            
    
    words = blanks + 1;  // After counting spaces, adding one to get amount of words
    
    printf("\n%d A %d E %d I %d O %d\n %d words used\n %d spaces", a, e, i, o, u, words, blanks); // Sloppy output
    
	return 0;
}