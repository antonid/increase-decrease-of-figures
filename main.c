#define YES 1
#define NO 0
#define DEVISOR 10

#include <stdio.h>

int main()
{
	int number;
	int max_number;
	int current_number;
	int more = 0;
	int prev_digit;
	int digit; 

	scanf ("%d", &max_number);

	// Calculation of numbers in which figures increase.
	printf ("\nDigits increase in the following figures: \n");
	for (current_number = 10; current_number <= max_number; ++current_number){
		number = current_number;		
    	digit = number % DEVISOR;
    	number = number / DEVISOR;
    	prev_digit = digit;

		while (number != 0) { 
    		digit = number % DEVISOR;
    		number = number / DEVISOR;
    		if (prev_digit > digit){
    			more = YES;
    			} else {
    			more = NO;
    			break;
    			}
    	prev_digit = digit;
 		}	

 		if (more == YES) {
 			printf("%d\n", current_number);
 		}
	}
	//Calculation of numbers in which figures increase.
	printf ("\nDigits decrease in the following figures: \n");
	for (current_number = DEVISOR; current_number <= max_number; ++current_number){
		number = current_number;		
    	digit = number % DEVISOR;
    	number = number / DEVISOR;
    	prev_digit = digit;

		while (number != 0) { 
    		digit = number % DEVISOR;
    		number = number / DEVISOR;
    		if (prev_digit < digit){
    			more = YES;
    			} else {
    			more = NO;
    			break;
    			}
    	prev_digit = digit;
 			}	
 		
 		if (more == YES) {
 			printf("%d\n", current_number);
 		}
	}

	return 0;
}
