#include <stdio.h>
#include <math.h>
int Nguyen_to(int n)
{
	if (n < 2)
		return 0;
	if (n == 2)
		return 1;
	if (n % 2 == 0)
		return 0;
	int i;
	for (i = 3; i <= sqrt(n); i += 2)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int Check(int n)
{
	int sum = 0;
	while (n > 0)
	{
		int x = n % 10;
		sum += x;
		if (x != 2 && x != 3 && x != 5 && x != 7)
			return 0;
		n /= 10;
	}
	if (Nguyen_to(sum))
		return 1;
	return 0;
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		int d = 0;
		for (int i = a; i <= b; i++)
			if (Check(i) && Nguyen_to(i))
				d++;
		printf("%d\n", d);
	}
	return 0;
}