#include <stdio.h>
int main() {
	int t, a, b;
	scanf("%d", &t);
	while (t--) 
	{
		scanf("%d%d", &a, &b);
		while (a!=b)
		{
			if (a >= b)
				a = a - b;
			else
				b = b - a;
		}
		printf("%d\n", a);
	}
}