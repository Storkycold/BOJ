#include <stdio.h>

int main() {

	int a; 
	int num[101];
	int cnt = 0;

	scanf("%d", &a);

	for (int i = 0; i < a; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < a; i++)
	{
		int count = 0;
		for (int j = 2; j <= num[i]; j++)
		{
			if (num[i] % j == 0)
			{
				count++;

				if (count >= 2)
					break;
			}
		}
		if (count == 1)
			cnt++;
	}
	printf("%d\n", cnt);

	return 0; 
}