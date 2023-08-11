#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define r return 0;
#define rep(i, n) for(int i = 0; i < n; i++)

int main() {

	int n;
	int check_sum;
	int result; 
	int string_sum = 0; 
	int arr[4];
	char str[9];
	char copy[3];

	scanf("%d", &n);
	getchar();

	rep(i, n)
	{
		gets(str);

		// printf("%d\n", len);

		rep(i, 3)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = (str[i] - 'A') % 26; // A 0 ~ Z 25
			}
		}
		rep(i, 3)
		{
			copy[i] = str[i];
			// printf("%d\n", copy[i]);
		}
		string_sum = copy[0] * 26 * 26 + copy[1] * 26 + copy[2] * 1; // 비교용 
		
		// printf("%d", string_sum);
		atoi(str);
		for (int i = 4; i < 8; i++)
		{
			str[i] -= '0';
			// printf("%d\n", str[i]);
		}
		result = 1000 * str[4] + 100 * str[5] + 10 * str[6] + str[7]; // 비교용 

		if (string_sum > result)
		{
			if (string_sum - result <= 100)
				printf("nice\n");
			else
				printf("not nice\n");
		}
		else if (string_sum < result)
		{
			if (result - string_sum <= 100)
				printf("nice\n");
			else
				printf("not nice\n");
		}
		else
			printf("nice\n");
	}
	r
}