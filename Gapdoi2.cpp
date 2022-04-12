#include<stdio.h>
int main()
{
	long a, b;
	scanf("%ld", &a);
	for (long i = 0; i < a; i++)
	{
		scanf("%ld", &b);
		printf("%ld\n", b * 2);
	}
}