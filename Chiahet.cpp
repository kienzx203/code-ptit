#include <stdio.h>
int kiemtra(int n, int k)
{
	int dem = 0;
	while (n > 1)
	{
		int temp = n;
		while (temp % 2 == 0)
		{
			dem++;
			temp /= 2;
		}
		n--;
	}

	if (dem >= k)
		return 1;
	else
		return 0;
}
int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	if (kiemtra(n, k))
		printf("Yes");
	else
		printf("No");
	return 0;
}