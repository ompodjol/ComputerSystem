#include<stdio.h>
#include<math.h>

#define PI 3.14159265358979323846

int area_rectangle(int length, int width) {
	int a_rect = length * width;
	
	return a_rect;
}

int area_square(int side) {
	int a_square = side * side;

	return a_square;
}

int area_triangle(int base, int height) {
	int a_tri = (base * height) / 2;

	return a_tri;
}

int area_circle(int radius) {
	int a_circle = PI * (radius * radius);

	return a_circle;
}
