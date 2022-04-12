#include <stdio.h>
#include <string.h>
int main() {
	int t;
	long long a, b, c;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%lld", &a);
		c = a % 10;
		while (a!=0)
		{
			b = a % 10;
			a = a / 10;
		}
		if (b==c) 
			printf("YES\n");
		else 
			printf("NO\n");
	}
}