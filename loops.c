/*
 * loops.c
 *
 *  Created on: Jun 16, 2017
 *      Author: Avell 1511
 */

#include <stdio.h>

int main() {

	int counter;
//	int  con = 0;

	printf("Insert counter times: ");
	scanf("%d", &counter);

	for (int con = 0; con < counter; con++) {
		printf("Value : %d", con);
	}

//	do {
//		printf("Value %d : ", con);
//		con++;
//	} while (con < counter);

//	while (con < counter) {
//		printf("value: %d ", con);
//		con++;
//	}

	return 0;
}
