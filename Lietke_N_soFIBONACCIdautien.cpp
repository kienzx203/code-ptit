#include <stdio.h>
int main()
{
	int n, a = 0, b = 1, m,s=2;
	scanf("%d", &n);
	if (n == 1)
		printf("0");
	if (n == 2)
		printf("1");
	if (n > 2)
	{
		printf("0 1");
		while (s < n)
		{
			m = b;
			b += a;
			a = m;
			s++;
			printf(" %d", b);
		}
	}
}