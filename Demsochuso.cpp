#include <stdio.h>
#include<math.h>
int main()
{
	long long a, s;
	scanf("%lld", &a);
	s = log10(a) + 1;
	printf("%lld", s);
}