#include <stdio.h>

int main() {

	char str[11] = { 0, };

	gets(str);

	int len = strlen(str);

	int i = 0; 
	while (str[i] != '\0')
	{
		i++;
	} // i 번째 인덱스를 찾았다
	for (int j = 0; j < len; j++)
	{
		if (48 <= str[j] && str[j] <= 57)
		{
			for (int k = 0; k < i - 1; k++)
			{
				for (int m = 0; m < i - 1 - k; m++)
				{
					if (str[m] < str[m + 1])
					{
						int temp;
						temp = str[m];
						str[m] = str[m + 1];
						str[m + 1] = temp;
					}
				}
			}
		}
	}
	printf("%s\n", str);

	return 0; 
}