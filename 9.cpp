/* WAP  to check wheather a given number is an armstrong number or no */
#include<stdio.h>
int main()
{
	int n,arm=0,r,c;
	printf("enter a number");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		arm=arm+(r*r*r);
		n=n/10;
	}
	if(c==arm)
	printf("armstrong number");
	else
	  printf("not armstrong");
	  
	  return 0;
}
