#include <stdio.h>
int gcd(int x, int y)
{
	while (x * y != 0)
	{
		if (x > y)
		{
			x = x % y;
		}
		else
		{
			y = y % x;
		}
	}
	return x + y;
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a, b, c, d, e, f;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		e = gcd(a, b);
		f = gcd(c, d);
		if (e == f)
		{
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
}