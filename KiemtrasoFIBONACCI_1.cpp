#include <stdio.h>
int main()
{
	int n, a = 0, b = 1, m;
	scanf("%d", &n);
	while (b < n)
	{
		m = b;
		b += a;
		a = m;
	}
	if (b == n)
	{
		printf("1");
	}
	else
		printf("0");
}