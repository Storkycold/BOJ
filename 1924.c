#include <stdio.h>

int main() {

	int a, b; 
	int count = 0; 
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	scanf("%d %d", &a, &b); 

	/*int i = 1;
	do
	{
		count = count + month[i - 1];
		count += b;
		i++;
	} while (i < a);
	*/

	for (int i = 1; i < a; i++)
	{
		count += month[i-1]; 
	}
	count += b;

	if (a == 1)
	{
		count = b;
	}

	switch (count % 7)
	{
	case 0:
		printf("SUN\n");
		break;
	case 1:
		printf("MON\n");
		break;
	case 2:
		printf("TUE\n");
		break;
	case 3:
		printf("WED\n");
		break;
	case 4:
		printf("THU\n");
		break;
	case 5:
		printf("FRI\n");
		break;
	case 6:
		printf("SAT\n");
		break;
	}

	return 0; 
}