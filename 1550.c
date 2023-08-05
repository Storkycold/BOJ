#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	
	int len;
	int decimal = 0; 
	int exponent = 0; 
	char x[6] = { 0, }; // 16진수 입력 

	gets(x);

	len = strlen(x);

	for (int i = len - 1; i >= 0; i--) // 문자열을 역순으로 출력 abcdef 면 f 는 str[5] 니까 5부터 0까지 출력해주는 식이다 
	{
		char hexa = x[i]; // 제일 오른쪽에 있는 수가 저장될 것이다. 

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