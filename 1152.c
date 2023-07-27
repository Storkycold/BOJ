#include <stdio.h>
#include <string.h>

int main() {

	int count = 0;
	int len = 0; 
	char str[1000003] = { 0, };
	
	gets(str);

	len = strlen(str);

	for (int i = 0;i < len; i++)
	{
		if (str[i] == ' ')
		{
			count++;
		}
	}

		if (str[0] == ' ')
		{
			count--;
		}
		if (str[len - 1] == ' ')
		{
			count--;
		}
	
	printf("%d\n", count + 1);


	return 0; 
}