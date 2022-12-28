#include<stdio.h>

int fact(int x)
{
	int i,a=1;
	for(i=x;i>=1;i--)
	   a=a*i;
	return a;
}
int main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	printf("Factorial = %d",fact(a));
	return 0;
}
