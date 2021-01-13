#include<stdio.h>
int main()
{
	int n, k,j;
	scanf("%d %d", &n,&k);
	for (j = 0; j<2 * k; j += 2)
	{
		printf("%d %d ", j + 2, j + 1);
	}
	for (j; j<2 * n; j += 2)
	{
		printf("%d %d ", j + 1, j + 2);
	}
	printf("\n");
	return 0;
}
