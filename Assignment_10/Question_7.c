#include<stdio.h>
int fact(int x)
{
	int i,a=1;
	for(i=x;i>=1;i--)
	   a=a*i;
	return a;
}
int Num_ofcnbntion(int n,int r)
{
	return fact(n)/(fact(n-r)*fact(r));
}
int main()
{
	int n,r;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("Enter the value of r\n");
	scanf("%d",&r);
	printf("Possible Combinations = %d",Num_ofcnbntion(n,r));
	return 0;
}
