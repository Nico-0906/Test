/*
 ============================================================================
 Name        : prueba.c
 Author      : Nicolas
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("color 02");
	int a;
	printf("escribe el numero: ");
	scanf("%d", &a);
	printf("el numero es: %d\n",a);
	system("pause");
	return EXIT_SUCCESS;
}
