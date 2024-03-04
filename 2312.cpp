#include <iostream>
#include <cstdio>

using namespace std; 

int arr[100000];

int main() {

	int tc;
	int a;

	scanf("%d", &tc);

	while (tc--)
	{
		scanf("%d", &a);

		int copy = a;

		for (int j = 0; j < 100000; j++)
		{
			arr[j] = 0;
		}

		for (int i = 2; i <= copy;)
		{
			if (copy % i == 0)
			{
				copy /= i;
				arr[i]++;
			}
			else
			{
				++i;
			}
			if (copy < 2)
				break;

		}
		for (int i = 2; i <= a; i++)
		{
			if (arr[i] > 0)
			{
				printf("%d %d\n", i, arr[i]);
			}
		}
	}
}
