#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std; 

int GCD(int x, int y)
{
	if (x < y)
		swap(x, y);

	if (x % y == 0)
		return y;
	else
		return GCD(x % y, y);
}

int main() {

	int a, b, c, d;
	int A, B; // cout �� �� �ΰ� 
	int gcd;
	int m; 

	cin >> a >> b;
	cin >> c >> d;
	
	B = b * d; 
	A = a * d + b * c; 
	//gcd = GCD(b, d); // 1���� 1�� �ƴ��� �˻� 
	/*
	if (gcd == 1)
	{
		B = b * d / gcd;  // ū �� 
		A = a * d + b * c;

		gcd = GCD(A, B);

		B = B / gcd;
		A = A / gcd;

		cout << A << "\n" << B << endl;
		return 0; 
	}
	else if (gcd != 1)
	{
		if (b < d) // a�� m �� �����־���� 
		{
			m = d / b;
			B = d; 
			A = a * m + c; 
		}
		else if (b >= d) // c �� m �� �����־���� 
		{
			m = b / d; 
			B = b;
			A = c * m + a; 
		}
	}
	*/
	gcd = GCD(A, B);

	A /= gcd;
	B /= gcd;

	cout << A << "\n" << B << endl;
	return 0; 
}
