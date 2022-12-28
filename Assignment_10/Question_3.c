#include<stdio.h>

int check_even_odd(int a)
{
	if(a%2)
	  return 0;
	return 1;
}
int main()
{
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	if(check_even_odd(x))
	   printf("Even");
	else
	   printf("Odd");
	return 0;
}
