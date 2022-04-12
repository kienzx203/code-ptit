#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, s = 1;
		scanf("%d", &n);
		if (n < 2) return 0;
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0)
				s = 0;
		}
		if ( s == 1) 
			printf("YES\n");
		else 
			printf("NO\n");
	}
}