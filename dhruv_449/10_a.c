#include <stdio.h>
void main ()
{
	int i=0,n,sum=0;
	printf("enter the number which you want to sum\n");
	scanf ("%d",&n);
	for (int i = 0; i<=n; ++i)
	{  sum=sum+i;
		
	}
        printf("sum=%d\n" , sum);
}
