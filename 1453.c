#include <stdio.h>

int main() {

	int a; 
	int b;
	int count = 0;
	int seat[101] = { 0, };

	scanf("%d", &a);

	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b);
		
		if (seat[b - 1] > 0)
			count++;
		else if (seat[b - 1] == 0)
			seat[b - 1]++;

	}
	printf("%d\n", count);

	return 0; 
}