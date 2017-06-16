/*
 * cond.c
 *
 *  Created on: Jun 16, 2017
 *      Author: Avell 1511
 */
#include <stdio.h>

int main() {

	float num1, num2;
	char op;
	float result;

	printf("Number 1:");
	scanf("%f", &num1);
	printf("Number 2:");
	scanf("%f", &num2);

	printf("OP: ");
	scanf("%s", &op);

	switch(op) {
		case '+':
			result = num1 + num2;
		break;
		case '-':
			result = num1 - num2;
		break;
		case '*':
			result = num1 * num2;
		break;
		case '/':
			result = num1 / num2;
		break;

		default:
			printf("Invalid Op");
	}


//	if (op == '+') {
//		result = num1 + num2;
//	} else {
//		printf("Invalid op");
//	}
//
//	if (op == '-') {
//		result = num1 - num2;
//	}
//
//	if (op == '*') {
//		result = num1 * num2;
//	}
//
//	if (op == '/') {
//		result = num1 / num2;
//	}

	printf("%f", result);

	return 0;
}

