#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

	int sum = 0; 
	int p = 0; 
	char str[1000001] = { 0, };

	gets(str);

	int len = strlen(str);

	for (int i = len - 1; i >= 0; i--)
	{
		sum = sum + (str[i]-'0') * pow(8, p);
		
		p++; 
	}
	printf("%d\n", sum);

	return 0; 
}
// 2진수를 8진수로 바꾸는거다 