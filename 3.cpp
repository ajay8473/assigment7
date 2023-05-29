/* WAP to check whether a given number is there in the fabonacci series or not */

#include<stdio.h>
int main()
{
	int n , a=0 , b=1 , next;
	
	printf("eneter a number\n");
	scanf("%d",&n);
	
	if(n==a || n==b)
	{
		printf("fabonacci number\n");
	}
	else
	{
		next = a+b;
		while(next < n)
		{
			a=b;
			b= next;
			next = a+b;
		}
		if(next == n)
		    printf("fabonacci");
		
		else
		     printf(" not fabonacci");    
	}
	
	return 0;
	
}
