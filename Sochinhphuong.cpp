#include<stdio.h>
#include<math.h>
int main()
{
	long long a,b;
	scanf("%lld", &a);
	for (int i =1 ; i <=a; i++)
	{
		scanf("%lld", &b);
		if (sqrt(b) ==(long long)sqrt(b))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}