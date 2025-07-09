#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	float discriminant, root1, root2;
	
	printf("Enter the coefficients (a, b, c) seperated by space: ");
	scanf("%d %d %d", &a, &b, &c);
	
	discriminant = b * b - (4 * a * c);
	if (discriminant == 0)
		{
		  root1 = root2 = -1*b/2*a;
		  printf("Roots are equal and real. Root = %f", root1);
		}
		
	else if (discriminant > 0)
		{
		  root1 = (-1*b + sqrt(discriminant))/2.0*a;
		  root1 = (-1*b + sqrt(discriminant))/2.0*a;
		  printf("Roots are real and different.\n root 1 = %f\n root 2 =%f\n", root1, root2);
		}
	else
		{
		  printf("Roots are imaginary and different.");
		}
}
