#include <stdio.h>
#include <math.h>
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		for (int i = 2; i <= sqrt(n); i++)
		{
			while (n % i == 0)
			{
				printf("%d ", i);
				n /= i;
			}
		}
		if (n > 1)
			printf("%d", n);
		printf("\n");
	}
}