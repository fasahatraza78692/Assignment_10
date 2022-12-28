#include<stdio.h>
void primeFact(int n)
{
	int i;
	for(i=2;i<=n;i++)
	 {
	 	while(n%i==0)
	 	 {
	 	 	printf("%d ",i);
	 	 	n/=i;
		 }
	 }
}
int main(){
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	primeFact(x);
 return 0;
}
