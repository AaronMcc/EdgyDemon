#include "stdio.h"
#include "math.h"

intAdder(int x, int y);
intMinus(int x, int y);
intMulti(int x, int y);
intDivide(int x, int y);
intPower(int x, int y);

void main()
{
	int a;
	int b;

		printf("Please enter 2 numbers to be added:\n");
		scanf_s("%d""%d", &a, &b);
		printf("The total is: %d\n", intAdder(a, b));
		puts("");
		printf("Please enter 2 numbers to be subtracted:\n");
		scanf_s("%d""%d", &a, &b);
		printf("The total is: %d\n", intMinus(a, b));
		puts("");
		printf("Please enter 2 numbers to be multiplied:\n");
		scanf_s("%d""%d", &a, &b);
		printf("The total is: %d\n", intMulti(a, b));
		puts("");
		printf("Please enter 2 numbers to be divided:\n");
		scanf_s("%d""%d", &a, &b);
		printf("The total is: %d\n", intDivide(a, b));
		puts("");
		printf("Please enter a number and an exponent:\n");
		scanf_s("%d""%d", &a, &b);
		printf("The total is: %d\n", intPower(a, b));
		puts("");
}

intAdder(int x, int y)
{
	int result = x + y;
	return result;
}

intMinus(int x, int y)
{
	int result = x - y;
	return result;
}

intMulti(int x, int y)
{
	int result = x*y;
	return result;
}

intDivide(int x, int y)
{
	int result = x / y;
	return result;
}

intPower(int x, int y)
{
	int result = pow(x, y);
	return result;
}
