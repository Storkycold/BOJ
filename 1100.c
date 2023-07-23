#include <stdio.h>
#include <string.h>
#define r return 0; 

int main() {

	int count = 0; 
	char str[8][8]; 

	for (int i = 0; i < 8; i++)
	{
		gets(str[i]); // 이러면 문자열 2차원 배열을 받을 수 있구나,, 
	}
	for (int i = 0; i <= 7; i++)
	{
		for (int j = 0; j <= 7; j++)
		{
			if (str[i][j] == 'F')
			{
				if (i % 2 == 0 && j % 2 == 0)
					count++;
				else if (i % 2 == 1 && j % 2 == 1)
					count++;
			}
		}
	}
	printf("%d\n", count);

	r
}