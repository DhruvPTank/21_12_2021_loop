#include <stdio.h>
void main()
{
	int i=1,fact=1,n;
	printf("enter the number which find factorial\n");
	scanf("%d",&n);

	for (int i = 1; i <n; ++i)
	{
		fact=fact*(i+1);
	}
	printf ("fact=%d\n" , fact);
}