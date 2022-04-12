#include<stdio.h>
#include<math.h>
int main()
{
	long long a, s, n;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++)
	{
		s = 0;
		scanf("%lld", &a);
		while (a != 0)
		{
			s = s + a % 10;
			a = a / 10;
		}
		printf("%lld\n", s);
	}
	
}