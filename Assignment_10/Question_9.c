#include<stdio.h>
int check(int n,int x)
{
	while(n!=0)
	{
		if(x==n%10)
		  return 1;
		n/=10;
	}
	return 0;
}
int main()
{
	int a,b;
	printf("Enter a number\n");
	scanf("%d",&a);
	printf("Enter a digit to find\n");
	scanf("%d",&b);
	if(check(a,b))
	  printf("%d is present",b);
	else
	  printf("%d is not present",b);
	return 0;
}
