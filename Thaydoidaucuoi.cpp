#include <stdio.h>
#include<math.h>
int main()
{
	long long a, b, s, c, d;
	scanf("%lld", &a);
	b = a % 10;
	s = log10(a) + 1;
	c = a / (pow(10, s - 1));
	a = a - c * pow(10, s - 1);
	if (b!=0)
	{
		printf("%lld", b);
	}
	for (int i = 2; i < s; i++)
	{
		d = a / (pow(10, s - i));
		a = a - d * pow(10, s - i);
		printf("%lld", d);
	}
	printf("%lld", c);
}