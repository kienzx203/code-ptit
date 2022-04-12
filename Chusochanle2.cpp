#include <stdio.h>
int main() {
	long long n;
	scanf("%lld", &n);
	int c = 0, a = 0, m;
	while (n != 0) 
	{
		m = n % 10;
		if (m % 2 == 0) 
			c++;
		else 
			a++;
		n /= 10;
	}
	printf("%d %d", a, c);
}