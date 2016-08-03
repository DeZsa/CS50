#include <stdio.h>

float carprice(int X);
float truckprice(int X);

// fflush(stdin) clears the buffer for no mix-ups and repeats
// Opening time for parking lot: 0600 <600, CLosing time for parking lot: >2200

int main ()
{
	int time = 0, 
        C = 0, 
        T = 0, 
        S = 0;
	int arrival, depart, timeLength, type;
	float cost, 
        totalCost = 0;
	
    
    // Prompting for user input to obtain vehicle information
	printf("Enter C for car, T for truck, or S for senior: ");
	type = getchar();
	fflush(stdin);
    
    
     // For unknonwn number of vehicles
while(type != EOF) {
    
     // Determining vehicle type. No S because seniors have it better than I do
    if(type == 'C' || type == 'T') {                               
        
    // Asks for user input arrival
	printf("\nArrival in military time: ");                           
	scanf("%d", &arrival);
	fflush(stdin);
        
        // Error when arrival time is before opening, loops to beginning
        while(arrival < 600) {                                      
            printf("\nLot opens at 0600: ");
            scanf("%d", &arrival);
    }
    
        // Error when arrival time is after closing, loops to beginning
        while(arrival > 2200) {                                     
        printf("\nLot closes at 2200: ");
        scanf("%d", &arrival);
    }
    

         // Asks for user's departure time
	printf("\nDeparture in military time: ");                        
	scanf("%d", &depart);
        
        while(depart < arrival) {
			printf("\nYou can't leave before you've arrived. LOL. Stop playin', fam: ");
			scanf("%d", &depart);
		}
        
        while(depart > 2200)
		{
			printf("\nLot closes at 2200: ");
			scanf("%d", &depart);
		}
             
    }
    
    // Condition for C input
	if(type == 'C') {	                                                
	       C++;  // Tee-hee, C++
	cost = carprice(timeLength);   
	timeLength = depart - arrival; // Finding cost per hour
	totalCost += cost;
	time += timeLength;
	printf("Arrival: \"%d\" \nDeparture: \"%d\" \nCost: $%2.2f \n", arrival, depart, cost);
	}
	

	if(type == 'T') {
	T++;
	cost = truckprice(timeLength);   
	timeLength = depart - arrival;	// Finding cost per hour
	totalCost += cost;
	time += timeLength;
	printf("Arrival: \"%d\" \nDeparture: \"%d\".\n Cost: $%2.2f \n", arrival, depart, cost);
	}
	
	
	if(type == 'S') {
	S++; 
	printf("Free for you Glen Coco, you go Glen Coco.\n\n"); // Seniors get free shit
	}
    
	fflush(stdin);  // Clearing buffer to get summary
    
	printf("Enter C for car, T for truck, S for senior, or hit CTRL+Z for summary: ");
	type = getchar();
	fflush(stdin);
	}
    
	time = time / 100;  // Dividing by 100 for average hours
	
    // SUmmary report
	printf("\n\n%d cars, %d trucks, and %d seniors parked.\n", C, T, S);
	printf("Fees: $%4.2f\nTotal hours in parking lot: %d \n", totalCost, time);
	
	system("pause"); // To read summary and keep program from closing
	
	return 0;
}


// Calculations for Car and truck
float carprice(int timeLength) {
	float cost;
	
    // First two hours free
	if(timeLength <= 200)
		cost = 0;
    
    // Next 3 hours .50/hr
    if(timeLength <= 500) {
		if(timeLength < 300)
			cost = .50;
		else if(timeLength < 400)
			cost = 1.00;
		else
			cost = 1.50;
	}
		
    // Next 10 hours .25/hr
		if(timeLength > 500) {
			if(timeLength < 600)
				cost = 1.75;
			else if(timeLength < 700)
				cost = 2.00;
			else if(timeLength < 800)
				cost = 2.25;
			else if(timeLength < 900)
				cost = 2.50;
			else if(timeLength < 1000)
				cost = 2.75;
			else if(timeLength < 1100)
				cost = 3.00;
			else if(timeLength < 1200)
				cost = 3.25;
			else if(timeLength < 1300)
				cost = 3.50;
			else if(timeLength < 1400)
				cost = 3.75;
			else if(timeLength < 1500)
				cost = 4.00;
			else
				cost = 4.25;
		}
	
	return cost;
}

float truckprice(int timeLength) {
	float cost;
	
    // Free for first hour
	if(timeLength <= 100)
		cost = 0;
    
    // Next two hours is 2/hr
    if(timeLength <= 300) {
        if(timeLength < 200)
            cost = 1.00;
		else
			cost = 2.00;
    }
    
    // Next 12 hours is 0.75/hr
    if(timeLength > 300) {
		if(timeLength < 400)
            cost = 2.75;
		else if(timeLength < 500)
				cost = 3.50;
		else if(timeLength < 600)
				cost = 4.25;
		else if(timeLength < 700)
				cost = 5.00;
		else if(timeLength < 800)
				cost = 5.75;
        else if(timeLength < 900)
				cost = 6.50;
		else if(timeLength < 1000)
				cost = 7.25;
		else if(timeLength < 1100)
				cost = 8.00;
		else if(timeLength < 1200)
				cost = 8.75;
		else if(timeLength < 1300)
				cost = 9.50;
		else if(timeLength < 1400)
				cost = 10.25;
		else if(timeLength < 1500)
				cost = 11.00;
		else
				cost = 11.75;
		
		}	
	
	return cost;
}