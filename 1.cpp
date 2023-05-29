/* WAP to find the Nth term of the fibonnaci series */

#include<stdio.h>
int main()
{
	int n, i , a=0,b=1,c;
	printf("enter a number of term ...");
	scanf("%d",&n);
	
	for(i=1;i<=n;i--)
	{
		
		printf("%d ",a);
		c = a+b;
		a=b;
		b=c;
	}
}
