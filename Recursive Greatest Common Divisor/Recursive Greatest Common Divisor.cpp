#include <stdio.h>

int recursiveGreatestCommonDivisor(int firstNumber, int secondNumber);

int main() {
	int firstNumber, secondNumber, result;

	printf("Greatest Common Divisor (GCD) of 2 numbers: \n");
	printf("\n");

	printf("Enter two Whole Numbers \n");
	printf("\n");

	printf("first Number : ");
	scanf("%d", &firstNumber);
	printf("second Number : ");
	scanf("%d", &secondNumber);

	result = recursiveGreatestCommonDivisor(firstNumber, secondNumber);
	printf("\n");

	if (result == -1) {
		printf("Invalid Input \n");
		printf("\n");
	}
	else {
		printf("Greatest Common Divisor (%d,%d) = %d \n", firstNumber, secondNumber, result);
	}
	printf("\n");

	return 0;
}

int recursiveGreatestCommonDivisor(int firstNumber, int secondNumber)
{
	if ((firstNumber < 0) || (secondNumber < 0)) {
		return -1;
	}

	if (!firstNumber) {
		return secondNumber;
	}
	else if (!secondNumber) {
		return firstNumber;
	}

	if ((secondNumber < firstNumber) && (firstNumber % secondNumber == 0)) {
		return secondNumber;
	}
	else if (firstNumber < secondNumber) {
		return recursiveGreatestCommonDivisor(secondNumber, firstNumber);
	}
	else {
		return recursiveGreatestCommonDivisor(secondNumber, (firstNumber % secondNumber));
	}
}