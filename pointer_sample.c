#include<stdlib.h>
#include<stdio.h>

void main() {
	int* x;
	int* y;

	x = malloc(sizeof(int));

	printf("%d", *x);

	*x = 42;

	//*y = 13;

	y = x;

	*y =13;

}

