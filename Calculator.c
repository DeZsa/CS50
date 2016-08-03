#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main() { 
   double result = 0.0, 
          num; 
   char operator,
        a, 
        reload; 

   printf("Calculator is on.\n"); 
   do { 
      while ( a != 'r' || a != 'R' ) /* 'R' or 'r' valid for result */ { 
         printf("Result = %.2lf\n", result); /* Default */

         scanf("%c", &operator); 

        /* Detects eraly 'r' or 'R', exits program early. */ 
         if ( operator == 'r' || operator == 'R' ) 
            break;

         scanf("%lf", &num); 

        /* switch for operators */
         switch (operator) { 
            case '+' : result += num; break; 
            case '-' : result -= num; break; 
            case '*' : result *= num; break; 
            case '/' : result /= num; break; 
         } 
         fflush(stdin); 
      } 
      printf("Final result = %.2lf\n", result); 

      printf("Again? (y/n)\n"); 
      fflush(stdin); 
      scanf("%c", &reload); 
   } 
   while ( reload != 'n' ); /* If reload = y, continue calculations. Else, terminate program. */
       
   return 0;  
}