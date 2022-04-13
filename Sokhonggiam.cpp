#include <stdio.h>
#include <string.h>
int A[100], n, OK = 1;
void In()
{
	for (int k = 1; k <= n; k++)
	{
		printf("%d", A[k]);
	}
	printf(" ");
}
void Sinh()
{
	int i = n;
	while (i > 0 && A[i] == 9)
	{
		i--;
	}
	if (i > 0)
	{
		A[i] += 1;
		if (A[i + 1] == 9)
		{
			for (int j = i + 1; j <= n; j++)
			{
				A[j] = A[i];
			}
		}
	}
	else
	{
		OK = 0;
	}
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		OK=1;
		for (int e = 1; e <= n; e++)
		{
			A[e] = 1;
		}
		while (OK)
		{
			In();
			Sinh();
		}
		printf("\n");
	}
}