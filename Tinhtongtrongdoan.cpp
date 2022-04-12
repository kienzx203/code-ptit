#include <stdio.h>
int main()
{
	long long a, b, s = 0;
	scanf("%lld%lld", &a, &b);
	if (a <= b)
	{
		for (long long i = a; i <= b; i++)
		{
			s = s + i;
		}
		printf("%lld", s);
	}
	else
	{
		for (long long i = b; i <= a; i++)
		{
			s = s + i;
		}
		printf("%lld", s);
	}
	
}