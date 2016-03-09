// SimpleArithmeticCalculator.cpp : Defines the entry point for the console application.
//


//#include <stdio.h>
//#include <conio.h>

//int main()
//{
//	printf("Hellow world .\n");
//	_getch();
 //   return 0;
//}

//1. C program to calculate roots of a quadratic equation
//2. Quadratic equation in c language

#include <stdio.h>
#include <stdlib.h>



int main() {
	int selecion;
	
	printf("Welcome to Simple Arithmtic Calculator\n\n");
	printf("Please Select below by typing either 1, 2 or 3 \n");
	printf("1. Fibanocci \n");
	printf("2. Arithmetic \n");
	printf("3. Exit \n");
	scanf_s("%d", &selecion);

	switch (selecion) {
	case 1:fibanocciFunction();break;
	case 2:quadraticEquation(); matrixTraceRoot(); break;
	case 3:exitFunction(); break;
	default:
		/* If integr selected is other than 1, 2, 3, error message is shown */
		printf("Error! operator is not correct");
		break;
	}

	_getch();
	return 0;
}

int quadraticEquation() {

	printf("You Seleced Aritmetic Equation \n\n");

	float a, b, c;
	float d, root1, root2;

	printf("Enter quadratic equation in the format ax^2+bx+c: \n");
	scanf_s("%fx^2%fx%f", &a, &b, &c);

	d = b * b - 4 * a * c;

	if (d < 0) {
		printf("Roots are complex number.\n");

		return 0;
	}

	root1 = (-b + sqrt(d)) / (2 * a);
	root2 = (-b - sqrt(d)) / (2 * a);
	printf("Roots of quadratic equation are: %.3f , %.3f", root1, root2);

	return 0;
}

int fibanocciFunction() {

	system("cls");
	printf("You Seleced Fibaocci  \n\n");

	printf("A fibanocci is an integer in the infinite sequence 1, 1, 2, 3, 5, 8, 13, … of which the \n");
	printf("first two terms are 1 and 1 and each succeeding term is the sum of the two\n");
	printf("immediately preceding.\n\n");

	printf("The Fibonacci sequence is a set of numbers that starts with a one or a zero, followed by a one, \n");
	printf("and proceeds based on the rule that each number (called a Fibonacci number) is equal to the \n");
	printf("sum of the preceding two numbers. \n\n");

	printf("If the Fibonacci sequence is denoted F ( n ), where n is the first term in the sequence, \n");
	printf("the following equation obtains for n = 0, where the first two terms are defined as 0 and 1 by convention: \n");

	printf("F (0) = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ...\n");

	printf("In some texts, it is customary to use n = 1. ");
	printf("In that case the first two terms are defined as 1 and 1 by default, and therefore:\n");

	printf("F (1) = 1, 1, 2, 3, 5, 8, 13, 21, 34 ...\n\n\n");

	int i, n, a = 0, b = 1, show = 0;
	printf("\nEnter number of terms required in Fibonacci Series: ");
	scanf_s("%d", &n);
	printf("\nThe Fibonacci Series is:\n\n\n %d+%d+", a, b);
	/* Showing the first two term of the Fibonacci Series */
	i = 2;
	/* i=2, since the first two terms of the series have already been shown*/
	while (i<n)
	{
		show = a + b;
		a = b;
		b = show;
		++i;
		printf("%d+", show);
	}

	printf("\n\n\n ");
	main();
	return 0;
}

int matrixTraceRoot(){

	printf("\n\n Matrix Trace Route.  \n\n");
	int i, j, a[10][10], m, n;

	printf("Enter no: of Rows : ");
	scanf_s("%d", &m);
	printf("Enter no: of Columns : ");
	scanf_s("%d", &n);
	printf("Enter a Number : ");
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("\nElements are :\n");
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}
	_getch();

	return 0;
}

int exitFunction() {

	int num;

	fflush(stdout);
	printf("Are You sure you want to exit this application? \n");
	printf("Please Select below by typing either 1 or 2 \n");
	printf("1. Yes \n");
	printf("2. No \n");

	scanf_s("%d", &num);

	switch (num) {
	case 1:exit(0); break;
	case 2:main(); break;
	default:printf("Error! Invalid Selection \n"); 
		fflush(stdout); exitFunction();break;
	}

	_getch();
	return 0;
}
