#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool check[100] ;
long long a[100];
long long Bro(long long k)
{
	long long y=1;
	for (long long  i = 0; i < k; i++)
	{
		y*=10;
	}
	return y;
}
int main()
{
	for (int i = 0; i < 10; i++)
	{
		check[i] = false;
	}
	check[2] = true;
	check[3] = true;
	check[5] = true;
	check[7] = true;
	long long t;
	scanf("%lld", &t);
	long long f = t;
	while (t != 0)
	{
		long long k = log10(t) + 1;
		long long s = Bro(k-1);
		long long x = t / s;
		t = t - x * s;
		if (check[x] == true)
		{
			a[x]+=1;
		}
	}
	while (f != 0)
	{
		long long k = log10(f) + 1;
		long long s = Bro(k-1);
		long long x = f / s;
		f = f - x * s;
		if (check[x] == true)
		{
			check[x]=false;
			printf("%lld %lld\n", x, a[x]);
		}
	}
}