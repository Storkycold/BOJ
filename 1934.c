#include <stdio.h>
int divisor(int, int);

int main() {

	int testcase; 
	int a, b;

	scanf("%d\n", &testcase);

	for (int i = 0; i < testcase; i++)
	{
		scanf("%d %d", &a, &b); 

		printf("%d\n", divisor(a, b)); 

	}

	return 0; 
}
int divisor(int x, int y)
{
	int a, b; //
	int result; 

	b = (x > y) ? x : y; // x, y �� ū �� 
	
	int j = 1; 
	while(1) // a = x, y �� ū �� +1 �� ���ѳ�����. 6 10 // 11, 12, 13... 
	{
		a = b * j; 
		if (a % x == 0 && a % y == 0)
		{
			result = a; 
			break; 
		}
		j++;
	}

	return result; 
}