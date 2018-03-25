// TEE2101 Programming Methodology 
// Lab 1 Question 2

#include <stdio.h>
#include <math.h>

int main()
{
	double coefficient_a, coefficient_b, coefficient_c, discriminant, root1, root2;

	printf("Quadratic Equation is AY^2 + BY + C = 0\n\nEnter coefficient A: \n"); //quadratic equation: ay^2 + by + c = 0
	scanf_s("%lf", &coefficient_a);
	printf("Enter coefficient B: \n");
	scanf_s("%lf", &coefficient_b);
	printf("Enter coefficient C: \n");
	scanf_s("%lf", &coefficient_c);

	discriminant = pow(coefficient_b, 2) - (4 * coefficient_a*coefficient_c); //compute discriminant for square root later
	
	/*if discriminant is positive or zero, proceed with calculation, else reject the input.*/
	if (discriminant >= 0)
	{
		root1 = ((-1 * coefficient_b) + sqrt(discriminant)) / (2 * coefficient_a); //compute both roots using formula
		root2 = ((-1 * coefficient_b) - sqrt(discriminant)) / (2 * coefficient_a);
		printf("\nRoots of the quadratic equation: %lf and %lf\n", root1, root2);
	}
	else
	{
		printf("Please retry. \n");
	}

	getchar();
	getchar();

	return 0;
}

