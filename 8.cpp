/* WAP to find next prime number of a given number */
#include<stdio.h>
int main()
{
	int i, n ,x;
	printf("enter a any number");
	scanf("%d",&n);
	
	for(i=n+1;;i++)
	{
		for(x=2;x<i;i++)
		{
			if(i%x==0)
			break;
		}
		if(i==x)
		break;
	}
	printf("the next prime number of %d is %d",n,i);
	return 0;
}
