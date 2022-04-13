#include <stdio.h>
long long x[10000], Y[10000];
long long sang()
{
	for (long long i = 2; i <= 1000; i++)
	{
		if (x[i] == 0)
		{
			for (long long j = i * 2; j <= 1000; j += i)
			{
				x[j] = 1;
			}
		}
	}
}
long long fibo()
{
	for (long long i = 2; i <= 1000; i++)
	{
		Y[i] = Y[i - 1] + Y[i - 2];
	}
}
long long tong(long long n)
{
	long long s = 0;
	while (n != 0)
	{
		s += n % 10;
		n /= 10;
	}
	for (long long k = 0; k <= 1000; k++)
	{
		if (s == Y[k])
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	long long a, b;
	Y[0] = 0;
	Y[1] = 1;
	x[0] = 1;
	x[1] = 1;
	sang();
	fibo();
	scanf("%lld%lld", &a, &b);
	if (a > b)
	{
		long long c = a;
		a = b;
		b = c;
	}
	for (long long i = a; i <= b; i++)
	{
		if (x[i] == 0 && tong(i))
			printf("%d ", i);
	}
}