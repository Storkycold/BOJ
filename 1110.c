#include <stdio.h>

int cycle(int a); // ���纻 ����� ����! 

int main()
{
	int num;

	scanf("%d", &num);

	if (num < 10)
	{
		num = num * 10;
	}

	printf("%d\n", cycle(num));

	return 0;
}
int cycle(int a) // 26 
{

	int count = 0;
	int one;
	int ten;
	int sum = 0;
	int NUM = a; // ���纻 �����!!!! Ÿ���� a �̹Ƿ� �����ؾ��Ѵ�. <���纻 �����>

	while (1)
	{
		one = NUM % 10;
		ten = NUM / 10;
		sum = ten + one; // 8 
		NUM = (NUM % 10) * 10 + sum % 10; //68 
		count++;

		if (NUM == a)
			break;
	}
	return count;
}
