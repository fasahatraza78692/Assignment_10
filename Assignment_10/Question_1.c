#include<stdio.h>

float CircleA(float radius)
 {
 	return 3.14*radius*radius;
 }
int main()
{
	float r;
	printf("Enter the radius of the circle\n");
	scanf("%f",&r);
	printf("Area of circle = %f",CircleA(r));
	return 0;
}
