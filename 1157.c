#include <stdio.h>
#include <string.h>

int main() {

	char str[1000001] = { 0, };
	int count[26] = { 0, };
	int max = 0; 
	int index;
	int flag = 1; 

	scanf("%s", str);
	int len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 97 && str[i] <= 122) // 소문자 
		{
			str[i] -= 32; // 소문자를 대문자로 
			count[str[i] - 'A']++;
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			count[str[i] - 'A']++;
		}
	}
		for (int i = 0; i < 26; i++)
		{
			if (count[i] > 0)
			{
				if (count[i] > max)
				{
					max = count[i];
					index = i; // zZa 를 입력하면 25 번째인 z 의 값이 2이므로 max 에 2가 저장될 것이고, 이때 index 는 25이다. 
				}
			}
		} // max 값 찾기 
		
		for (int i = 0; i < 26; i++)
		{
			if (i != index && max == count[i])
			{
				flag = 0; 
			}
		}
		if (flag == 0)
		{
			printf("?\n");
			return 0; 
		}
		else if (flag == 1)
		{
			printf("%c\n", index + 'A');
		}

	return 0; 
}