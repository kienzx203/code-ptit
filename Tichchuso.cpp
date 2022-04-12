#include <stdio.h>
int main()
{
	long long a, s = 1;
	scanf("%lld", &a);
	while (a!=0)
	{
		s = s * (a % 10);
		a = a / 10;
	}
	printf("%lld", s);
}