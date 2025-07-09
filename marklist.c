#include <stdio.h>

void main() {
	//Define variables
	int rollNo;
	float scoreA, scoreB, scoreC, total, percentage;
	char grade;
	
	//Prompt user for marks and store the marks in respective variables
	printf("Enter your Roll number:
	scanf("%f",&scoreA);
	printf("Enter marks obtained for Physics:\n");
	scanf("%f",&scoreA);
	printf("Enter marks obtained for Chemistry:\n");
	scanf("%f", &scoreB);
	printf("Enter marks obtained for Mathematics:\n");
	scanf("%f", &scoreC);
	
	//calculate total marks and percentage obtained
	total = scoreA + scoreB + scoreC;
	percentage = (total / 300) * 100;
	
	//Assign grade. Print whether passed or not Failed
	if (percentage >= 90)
		{
		  grade = 'A';
		  printf("Congratulations! You passed.\n");
		}
	else if (percentage >= 80)
		{
		  grade = 'B';
		  printf("Congratulations! You passed.\n");
		}
	else if (percentage >= 70)
		{
		  grade = 'C';
		  printf("Congratulations! You passed.\n");
		}
	else if (percentage >= 60)
		{
		  grade = 'D';
		  printf("Congratulations! You passed.\n");
		}
	else if (percentage  >= 45)
		{
		  grade = 'E';
		  printf("Congratulations! You passed.\n");
		}
	else if (percentage < 45)
		{
		  grade = 'F';
		  printf("Sorry! You failed.\n");
		}
		
	//print grade, marks obtatained for each subjects, total and percentage.
	printf("--------Result--------\n");
	printf("Your roll number: %d", rollNo);
	printf("your grade is %c\n", grade);
	printf("--------Marks Obtained--------\n");
	printf("Physics: %f\n", scoreA);
	printf("Chemistry: %f\n", scoreB);
	printf("Mathematics: %f\n", scoreC);
	printf("total marks obtained is: %f\n", total);
	printf("Percentage: %f\n", percentage);
	
	
	
}
