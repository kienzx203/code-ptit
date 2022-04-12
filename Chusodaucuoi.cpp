#include <stdio.h>
#include<math.h>
int main() {
	long long n, b, c ,s = 0;
	scanf("%lld", &n);
	s = log10(n) + 1;
	b = n % 10;
	c = n / (pow(10, s - 1));
	printf("%lld %lld", c, b);
}