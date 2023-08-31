#include <stdio.h>

int main() {

	int arr[300][300]; 
	int a, b; 
	int k; 

	scanf("%d %d", &a, &b); // 배열의 크기 

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			scanf("%d", &arr[i][j]);
		}	
	}
	scanf("%d", &k);

	for (int m = 0; m < k; m++)
	{
		int i, j, x, y, sum = 0; 

		scanf("%d %d %d %d", &i, &j, &x, &y);

		for (int a = i - 1; a < x; a++)
		{
			for (int b = j - 1; b < y; b++)
			{
				sum += arr[a][b];
			}
		}
		printf("%d\n", sum);
	}

	return 0; 
}