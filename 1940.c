#include <stdio.h>

int main() {

	int a, b; 
	int count = 0; 
	int arr[15000];

	scanf("%d %d", &a, &b); 

	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < a - 1; i++)
	{
		for (int j = i + 1; j < a; j++)
		{
			if (arr[i] + arr[j] == b)
			{
				count++;
			}
		}
	}

	printf("%d\n", count);

	return 0; 
}