#include <stdio.h>
#include <math.h>
long long a[100], n, k;
void Tack()
{
	for (int i = k - 1; i >= 0; i--)
	{
		a[i] = n % 10;
		n /= 10;
	}
}
int Thuan_nghich()
{
	for (int i = 0; i < k / 2; i++)
	{
		if (a[i] != a[k - 1 - i])
		{
			return 0;
		}
	}
	return 1;
}
int Tong()
{
	int s = 0;
	for (int i = 0; i < k; i++)
	{
		s += a[i];
	}
	if (s % 2 != 0)
	{
		return 1;
	}
	else
		return 0;
}
int Xet()
{
	for (int i = 0; i < k; i++)
	{
		if (a[i] % 2 == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	long long t;
	scanf("%lld", &t);
	while (t--)
	{
		scanf("%lld", &n);
		k = log10(n) + 1;
		Tack();
		if (Thuan_nghich() == 1 && Tong() == 1 && Xet() == 1)
		{
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
}