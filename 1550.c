#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	
	int len;
	int decimal = 0; 
	int exponent = 0; 
	char x[6] = { 0, }; // 16���� �Է� 

	gets(x);

	len = strlen(x);

	for (int i = len - 1; i >= 0; i--) // ���ڿ��� �������� ��� abcdef �� f �� str[5] �ϱ� 5���� 0���� ������ִ� ���̴� 
	{
		char hexa = x[i]; // ���� �����ʿ� �ִ� ���� ����� ���̴�. 

		if (hexa >= 48 && hexa <= 57)
		{
			decimal += (hexa - '0') * pow(16, exponent);
		}
		else if (hexa >= 65 && hexa <= 70)
		{
			decimal += (hexa - ('A' - 10)) * pow(16, exponent);
		}

		exponent++;
	}
	
	printf("%d\n", decimal);

	return 0;
}