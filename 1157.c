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
		if (str[i] >= 97 && str[i] <= 122) // �ҹ��� 
		{
			str[i] -= 32; // �ҹ��ڸ� �빮�ڷ� 
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
					index = i; // zZa �� �Է��ϸ� 25 ��°�� z �� ���� 2�̹Ƿ� max �� 2�� ����� ���̰�, �̶� index �� 25�̴�. 
				}
			}
		} // max �� ã�� 
		
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