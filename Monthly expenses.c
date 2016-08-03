#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main () {
int years;
float totalPay, rate, monthlyPay, princ, interest;
double final;
    
    printf("Principle cost: ");
    scanf("%f", &princ);
    printf("Rate (%): ");
    scanf("%f", &rate);
    printf("Term in years: ");
    scanf("%d", &years);
     
    years = years * 12;
    rate = rate / 1200;
    final = pow(1+rate, years);
    
    monthlyPay = (rate + (rate/(final - 1))) * princ;
    totalPay = monthlyPay * years;
    interest = princ * rate * years;
    
    printf("\nMonthly Payment: %.2f\nTotal Payment: %.2f\nInterest Expense: %.2f", monthlyPay, totalPay, interest);
    
return 0;
}