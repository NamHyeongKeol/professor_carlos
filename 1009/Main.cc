#include <stdio.h>

int a;
int b;
int res = 1;

int power(int x, int y)
{
	int local = 1;

	if (y == 0)
	{
		return 1;
	}

	int lol = power(x, y / 2);

	if (y % 2 == 0)
	{
		return lol * lol;
	}
	else
	{
		return lol * lol * x;
	}
	return local;
}

int num;

int main(void)
{
	scanf("%d", &num);
	for (int k = 0; k < num; k++)
	{
		scanf("%d %d\n", &a, &b);
	}
	for (int k = 0; k < num; k++)
	{
		printf("%d\n", power(a, b));
	}
	return 0;
}
