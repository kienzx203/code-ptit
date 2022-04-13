#include "stdio.h"
#include "math.h"
int tongcacchuso(int n)
{
	int a, m, tong1 = 0;
	while (n > 0)
	{
		a = n % 10;
		tong1 = tong1 + a;
		n = n / 10;
	}
	return tong1;
}
int phantichsorathuasonguyentoroiconglai(int n)
{
	int tong2 = 0;
	for (int i = 2; i <= n;)
	{
		if (n % i == 0)
		{
			tong2 = tongcacchuso(i) + tong2;
			n = n / i;
		}
		else
			i++;
	}
	return tong2;
}
int main()
{
	int n;
	scanf("%d", &n);
	if (phantichsorathuasonguyentoroiconglai(n) == tongcacchuso(n))
	{
		printf("YES");
	}
	else
		printf("NO");
}