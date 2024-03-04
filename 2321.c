#include <stdio.h>

int main() {

	int tc; 
	int n; 
	int temp; 
	int arr[100000] = { 0, };

	scanf("%d", &tc);

	while (tc--)
	{
		scanf("%d", &n);

		temp = n;
		int ctemp = n;

		for (int i = 2; i <= temp; i++)
		{
			if (n % i == 0)
			{
				arr[i]++;
				n /= i;
			}
			if (n < 2)
				break;
		}

		for (int i = 2; i <= ctemp; i++)
		{
			if (arr[i] > 0)
			{
				printf("%d %d\n", i, arr[i]);
			}
		}
		for (int i = 0; i < 100000; i++)
		{
			arr[i] = 0; 
		}
	}
	return 0; 
}