#include<stdio.h>

float S_intrest(float r,float t,float p)
{
	return (p*t*r)/100;
}
int main()
{
	float p,r,t;
	printf("Enter the Principal Amount\n");
	scanf("%f",&p);
	printf("Enter the rate of intrest\n");
	scanf("%f",&r);
	printf("Enter the time period in years\n");
	scanf("%f",&t);
	printf("SI = %.2f",S_intrest(r,t,p));
	return 0;
}
