#include <stdio.h>
#include <math.h>
int Check(int x)
{
	int dem = 0, check = 1;
	for (int i = 1; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			if (i * i != x)
			{
				if (i % 2 == 0)
					dem++;
				if (x / i % 2 == 0)
					dem++;
			}
			else if (i % 2 == 0)
				dem += 1;
		}
	}
	printf("%d\n", dem);
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		Check(n);
	}
}