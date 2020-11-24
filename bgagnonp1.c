/*------------------------------------------------------------------------------

Program file: bgagnonp1.c
Author:       Brett Gagnon
Date:         2/3/2019
Assignment:   Program #1
Objective:    Write a C program that determines the minimum grade, maximum grade, and class average of an
exam. Your program should first prompt for how many grades, then each of the grades. Your program
should first test that the number of grades to process is between 0 and 10. If number is not valid, your
program should issue an error message as shown below, and re-prompt for the number of grades.
Your program should then test that each grade entered is valid (i.e., between 0 and 100). If the grade
entered is not valid, the program should issue an error message as shown below, and re-prompt for a
correct grade. Once all grades are entered, your program should calculate the minimum grade,
maximum grade, and class average for that exam. It will then print the grades listed (sorted) in
ascending order
              
------------------------------------------------------------------------------*/

#include <stdio.h>


    
 /* Function to get obtain the weekly salees data, this will be the bulk of the
 program */
 
 void Grades(void)
 {
 	/*Variable Declarations */   
    /*------------------------------------------------------------------------*/
 	
 	int num1;
 	int grades[10];
 	int n;
 	int x = 0;
 	int sum = 0;
 	float average;
 	float median =0;
 	int temp;
 	
 	char          changed = 'T'; /*A flag to indicate if a swap was made */
 	
 	/*Welcome message showing user's company name */
	/*------------------------------------------------------------------------*/
 	
	printf("\nWelcome to the Grade Calculator.\n\n");
 	
 	
 	/*Prompt user to enter the number of grades to process, and then scan
	 and assign to variable "grades" */
 	/*------------------------------------------------------------------------*/
 	
	 printf("Enter the number of grades to process (0-10):");
 	 scanf("%i", &num1);
 	 printf("\n");
 	 
 	 /* If the number entered is 0, print thank you message and exit */
 	 /*-----------------------------------------------------------------------*/
 	 if (num1 == 0)
     {
  		printf("Thank you for using the Grade Calculator\n\n");
   	    return 0;
 	    	
     }
 	 
 	 /* While loop to validate that number of grades is between 0-10 */
 	 /*-----------------------------------------------------------------------*/
 	 
 	 while (num1 < 0 || num1 > 10)
 	 {
 		printf("***Invalid number of grades entered.***\n\n");
 	 	printf("Enter the number of grades to process (0-10):\n");
 	    scanf("%i", &num1);   
 	 }
 	 
 	 
 	 /* Set grades array to zero */
 	 /*-----------------------------------------------------------------------*/
 	 
 	 for (n= 0; n < 10; ++n)
 	 {
 	 	grades[n] = 0;
 	 }
 	 
 	 /* Take the number of grades to be processed and define each 
 	 individual grade, assigning the values to the grades array */
 	 /*----------------------------------------------------------------------*/
 	 
 	 
 	 for (n = 0; n < 10; ++n)
 	 /*begin for loop */
  	 {
 	 while ( x < num1 )  
	  
	  /* While x is less than the number of weekly sales, continue to prompt 
	  user for weekly sales numbers */
 	 {
 	 	printf("Enter grade for student #%i: ", x + 1);
 	 	scanf("%i", &grades[n]);
 	 	
 	 	
 	 	
 	 	
 	 /*Ensure that the number entered is greater than 0 */
 	 /*-----------------------------------------------------------------------*/
 	 
	  if ( grades[n] < 0 || grades[n] > 100 ) 
	  
	  /*if number entered is less than 0 or greater than 100, prompt and rescan*/
	  /*----------------------------------------------------------------------*/
	  {
	  printf("\n***Invalid grade entered. Please enter 0 - 100. ***\n\n");
	 
	  
	  }
	   else  /*if number entered is good */
      {
	   	
	  /* Start a running total with sum for every grade entered, increment x and
	  n values */
	  /*----------------------------------------------------------------------*/
	   	sum = sum + grades[n];
	   	x++;
	   	n++;
	   	//end else loop
	   }
	  
	  // end while loop	
 	 }
 	 
 	 

	  }//end for loop
	   
	
	/* Calculate Average as the sum divided by the number of weekly sales */
	/*-------------------------------------------------------------------*/
	
	average = ((sum * 1.0) / (num1 *1.0));
	
	 
	
	/* Bubble sort the array into ascending order */
	/*------------------------------------------------------*/
	while (changed == 'T') /* if no swap made, done. */
	
	{
		changed = 'F';
		
		/*For every element in the array starting at the first, test if this
		element is greater than the next element. If so, swap them */
		
		for (x = 0; x < num1-1; x++)
		
		{
			if (grades[x] > grades[x+1])
			{
				/* Swap needs to be made */
				
				temp = grades[x];
				grades[x] = grades[x+1];
				grades[x+1] = temp;
				
				/*Set flag indicating that a swap was made. This ensures that
				processing will continue, until nothing needs to be swapped*/
				
				changed = 'T';
			} /* end if */
			} /* end for */
		}/* end while */
		
	/*---------------------------------------------------------*/	
    /* Display the minimum, maximum, and average weekly sales */
	
	printf("\nThe minimum grade is %i\n", grades[0]); 
	
	printf("The maximum grade is %i\n", grades[num1-1]); 
		
	printf("The average grade is %.1f\n", average);
	
 	
 	/*Print out the array values and the sum  */
 	
 	printf("\nThe %i grades entered were:\n\n", num1);
 	
 	/* Begin for loop to print out each individual weekly sale stored in the
 	array */
 	/*----------------------------------------------------------------------*/
    
	for (x = 0; x < num1-1; ++x)
    {
 		printf("%i, ", grades[x]);
    }
    
   printf ("%i", grades[num1-1]);
   printf("\n");
   printf("\nThank you for using the Grade Calculator\n\n"); 
 }
 

 /* Main program - consisting only of the Grades function*/
 /*------------------------------------------------------------------------*/
 void main (void)
 {

	
	
Grades();





 }
 
/*END---------------------------------------------------------------------*/
/*------------------------------------------------------------------------*/
