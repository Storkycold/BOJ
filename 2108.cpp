#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std; 

int a; // ��� ��� 
int b; // �߾Ӱ� 
int c; // ���� ���� ��Ÿ���� �� ( ������ ���� ���, �ι�°�� ���� ��)
int d; // �ִ�, �ּ��� ���� 

int first(int, int);
/*int second(int);
int third(int);
int fourth(int);
*/
int main() {

	int tc; 
	int k;
	int sum = 0; 
	int res1;
	int res2; 
	int res3;
	int res4; 

	vector <int> v; 

	cin >> tc;

	for (int i = 0; i < tc; i++)
	{
		cin >> k; 
		v.push_back(k);
		sum += k; 
	}
	res1 = first(sum, tc);
	sort(v.begin(), v.end());
	res2 = v[(tc - 1) / 2];

	printf("%.1d\n", res1);
	printf("%d\n", res2);




}
int first(int x, int y)
{
	return x / y; 
}
