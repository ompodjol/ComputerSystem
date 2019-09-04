#include<stdio.h>
#include "function_ave.c"

int function_sum(int x, int y);

int a=5, b=10;

int main() {
	int sum = function_sum(a,b);

	printf ("The sum is %i\n", sum);
	
	int ave = function_ave(a,b);

	printf("The average is %i\n", ave);

	return 0;
}

int function_sum(int x, int y) {
	int sum = x + y;

	return sum;
}
