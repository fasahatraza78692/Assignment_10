#include<stdio.h>

void N_natural_num(int x)
{
	int i;
	for(i=1;i<=x;i++)
	   printf("%d ",i);
}
int main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	N_natural_num(a);
	return 0;
}
