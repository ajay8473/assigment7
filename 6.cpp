/* WAP to print all prime numbbers under 100 */
#include<stdio.h>
int main()
{
	 	int n,i, count;
	printf("all prime number under 100\n");
	
	for(n=1;n<=100;n++)
	{
	    count =0;
     	for(i=1;i<=n;i++)
	  {	
		if(n%i==0)
		{
		count++;
	    }
      }
		if(count ==2)
		{
		 printf("%d ",n);
	    }
      	
   }

	return 0;
}
