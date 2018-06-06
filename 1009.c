#include <stdio.h>
#define r return 0; 

int main() {

	int tc;
	int a, b;
	int arr[10]; 

	scanf("%d", &tc);

	for (int i = 0; i < tc; i++)
	{
		int sum = 1;

		scanf("%d %d", &a, &b);

		for (int j = 0; j < b; j++)
		{
			sum = (sum * a) % 10; 

			if (sum == 0)
				arr[i] = 10;
			else
				arr[i] = sum;
		}
		printf("%d\n", arr[i]);
	}
	r
}
// 런타임 에러?