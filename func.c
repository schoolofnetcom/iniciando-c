/*
 * func.c
 *
 *  Created on: Jun 16, 2017
 *      Author: Avell 1511
 */
#include <stdio.h>

int min(int num1, int num2);

int main() {
	int num1, num2, result;

	printf("Number 1: ");
	scanf("%d", &num1);
	printf("Number 2: ");
	scanf("%d", &num2);

	result = min(num1, num2);

	printf("\n %d", result);
	printf("\n %d", num1);

	return 0;
}


int min(int num1, int num2) {
	int result = 0;

	if (num1 < num2) {
		result = num1;
	} else {
		result = num2;
	}

	return result;
}
