/*
 * io.c
 *
 *  Created on: Jun 16, 2017
 *      Author: Avell 1511
 */
#include <stdio.h>
//#include <string.h>

int main() {

	int value = 2;
	char str[50];

	//input
//	value = getchar();

	//ouput
//	putchar(value);

//	puts("Insert: ");
//	gets(str);
//	puts(str);


	printf("Enter a value: ");
	scanf("%d", &value);
	printf("%d", value);

	//%c = char
	//%d = int
	//%f = float
	//%s = string

	return 0;
}

