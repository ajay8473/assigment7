#include<stdio.h>
int main()
{
	int x ,count = 0;
	while(x !=0)
{
		
	count ++;
	if(x&1 == 1)
	  break;
	else
	x= x>>1;
}

printf("first 1 from LSB is at %d\n",count);

return 0;
}
