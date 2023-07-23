#include <stdio.h>
#define INF 9999999
int main() {

	int min = INF;
	int x, y, w, h; 
	int arr[4]; 

	scanf("%d %d %d %d", &x, &y, &w, &h);

	arr[0] = x;
	arr[1] = y;
	arr[2] = w - x;
	arr[3] = h - y;

		for (int i = 0; i < 4; i++)
		{
			if (arr[i] <= min)
			{
				min = arr[i]; 
			}
		}
		printf("%d\n", min);
	
	return 0; 
}