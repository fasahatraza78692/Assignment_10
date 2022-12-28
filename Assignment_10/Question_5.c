#include<stdio.h>

void N_Oddnatural_num(int x)
{
	int i;
	for(i=1;i<=x*2;i++)
	{
		if(i%2!=0)
		printf("%d ",i);
	}
	   
}
int main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	N_Oddnatural_num(a);
	return 0;
}
