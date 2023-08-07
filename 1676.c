#include <stdio.h>
#define kevinshin return 0;

int main() {

	int a; 
	int count = 0; 

	scanf("%d", &a);

	while (a)
	{
		a /= 5; 

		count += a; 
	}
	printf("%d\n", count);

	kevinshin
}