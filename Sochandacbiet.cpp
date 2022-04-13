#include <stdio.h>
int main()
{
	long long t;
	scanf("%lld", &t);
	while (t--)
	{
		long long n, x, k = 0;
		scanf("%lld", &n);
		while (n != 0)
		{
			x = n % 10;
			n = n / 10;
			if (x % 2 != 0)
			{
				printf("NO\n");
				k = 1;
				break;
			}
		}
		if (k == 0)
			printf("YES\n");
	}
}