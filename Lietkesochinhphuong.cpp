#include <stdio.h>
#include <math.h>
int main() 
{
	long long a, b, s = 0;
	scanf("%lld%lld", &a, &b);
	for (int i = (long long)sqrt(a); i <=sqrt(b); i++)
	{
		if (i * i >= a && i * i <= b)
		{
			s++;
		}
	}
	printf("%lld\n", s);
	for (int i = (long long)sqrt(a); i <= sqrt(b); i++)
	{
		if (i * i >= a && i * i <= b)
		{
			printf("%lld\n", i * i);
		}
	}

}