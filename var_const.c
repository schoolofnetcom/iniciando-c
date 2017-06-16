/*
 * var_const.c
 *
 *  Created on: Jun 15, 2017
 *      Author: Avell 1511
 */
#include <stdio.h>

#define MY_CONST 100

int main() {

	int num, num2, num3;
	float salary = 1000.50;

	const int CONSTNUM = 50;

//	CONSTNUM = 70;
//	const float
//	const char

	num = 10;
	num2 = 20;
	num3 = 30;

	printf("%d %d %d %f %d %d", num, num2, num3, salary, CONSTNUM, MY_CONST);

	return 0;
}

