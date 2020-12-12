#include <stdio.h>
#include "lab3header.h"

main(void) 
{ 
  char ch = 'N'; /* variable to accept the user's choice, 
  N represents the condition not to exit from the program */ 
  int num; /* variable to accept a number */ 
  int a[5]={0,1,2,3,4};
  int BE; //variable used for base exponent function 
  while( (ch != 'Y') && (ch != 'y') )
 
	


  { 

    printf("Enter R to reverse the digits of the number \n"); 
	printf("Enter E to determine if the number is even or odd \n"); 
	printf("Enter P to determine if the number is prime \n"); 
	printf("Enter Y or y to exit the program\n"); 
	printf("Enter S to to sum\n");
	printf("Enter B for base and exponent\n");
	printf("Enter your choice: "); 

	scanf("%c", &ch); 
    while(getchar() != '\n'); /*clears the input buffer, alternatively 
    you can use fflush*(stdin)*/

    switch(ch) 
    { 
	  case 'R': case 'r': 
	    printf("Enter the number to be reversed:\n"); 
        scanf("%d", &num);
	 while(getchar() != '\n'); 
	printf("%d \n ",reverse_number(num));	
  break; 

	  case 'E': case 'e': 
        printf("Enter the number to check if it is even or odd:\n"); 
	    scanf("%d", &num);
	while(getchar() != '\n');
	if(even_odd(num)==0){
printf("even \n");}
else printf("odd \n"); 
         
	  break; 

	  case 'P': case 'p': 
        printf("Enter the number to check if it is prime or not:\n"); 
		scanf("%d", &num); 
        while(getchar() != '\n'); 
	if(is_prime(num)==1){
	printf("prime number \n");}
	else printf("not a prime \n");
	  break; 


	case 'S': case 's':
	printf("%d \n", sumall(a,3));
	break;	

	case 'B': case 'b':
	printf("please enter a base number");
	scanf("%d", &num);
	while(getchar() !='\n');
	printf("please enter an exponent");
	scanf("%d", &BE);
	while(getchar() !='\n');
	printf("%d \n", power(num,BE));
	break;
	 
	  case 'Y': case 'y': 
	    printf("Exiting the program.\n\n"); 
	  break;
 
	  default: 
	    printf("You have entered a wrong choice. Try again\n"); 
	  break; 
    } /* switch */
  } /* while */ 
  return(0); 
} /* main */ 
