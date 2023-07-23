#include <stdio.h>
#define r return 0; 

int main() {

	int n;
	int sum = 0;
	int aarr[100];
	int barr[100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &aarr[i]); 
	for(int i = 0; i < n; i++)
		scanf("%d", &barr[i]);

	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (aarr[j] < aarr[j + 1])
			{
				int temp; 
				temp = aarr[j];
				aarr[j] = aarr[j + 1];
				aarr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (barr[j] > barr[j + 1])
			{
				int temp; 
				temp = barr[j];
				barr[j] = barr[j + 1];
				barr[j + 1] = temp;
			}
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		sum += aarr[i] * barr[i]; 
	}
	printf("%d\n", sum);
	
	r
}
