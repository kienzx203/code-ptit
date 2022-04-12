#include<stdio.h>
int main()
{
	double a, b;
	scanf("%lf", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%lf", &b);
		printf("%.15lf\n", 1 / b);
	}
}