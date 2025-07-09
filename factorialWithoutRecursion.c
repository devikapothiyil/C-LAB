#include <stdio.h>

void main() {
	int num, fact, a;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	a = fact = 1;
	
	while (a <= num)
		{
		 /*for (a = 1; a <= num; ++a) {
		 	fact *= a;
		 }*/
		 fact *= a;
		 a++;
		}
		 printf("The factorial is of the number %d is %d", num, fact);
	
	
	
}
