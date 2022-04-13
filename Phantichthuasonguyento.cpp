#include <stdio.h>
int Check(int n)
{
	for (int i = 2; i <= n; i++)
	{
		int dem = 0;
		while (n % i == 0)
		{
			++dem;
			n /= i;
		}
		if (dem)
		{
			if (dem > 1)
				printf("%d^%d", i, dem);
			else
				printf("%d^1", i);
			if (n > i)
			{
				printf(" * ");
			}
		}
	}
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		printf("%d = ", n);
		Check(n);
		printf("\n");
	}
}