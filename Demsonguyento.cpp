#include <stdio.h>
#include<stdbool.h>
int N = 1000000, a, b, s = 0, t;
bool check[1000005];
void sang()
{
	for (int i = 2; i <= N; i++)
	{
		check[i] = true;
	}
	check[0] = false;
	check[1] = false;
	for (int i = 2; i <= N; i++)
	{
		if (check[i] == true)
		{
			for (int j = 2 * i; j <= N; j += i)
			{
				check[j] = false;
			}
		}
	}
}
int xet(int z)
{
	while (z != 0)
	{
		int k = z % 10;
		if (check[k] == false)
		{
			return 0;
		}
		z /= 10;
	}
	return 1;
}
int main()
{
	sang();
	scanf("%d", &t);
	while (t--)
	{
		s = 0;
		scanf("%d %d", &a, &b);
		for (int i = a; i <= b; i++)
		{
			if (check[i] == true && xet(i) == 1)
			{
				s++;
			}
		}
		printf("%d\n", s);
	}
}