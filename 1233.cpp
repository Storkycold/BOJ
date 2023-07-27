#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int a[101]; 
vector <int> cur; 

int main() {

	fill(a, a + 101, 0);

	int s1, s2, s3; 
	int max = -1;
	int idx;
	int cnt = 0;
	cin >> s1 >> s2 >> s3; 

	a[s1 + s2]++; 
	a[s2 + s3]++;
	a[s1 + s3]++;

	for (int i = 0; i < 101; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			idx = i; 
		}
	}
	for (int i = 0; i < 101; i++)
	{
		if (a[i] == 3)
		{
			cnt++; 
			cur.push_back(i);
		}
	}
	/*if (cnt == 3)
	{
		int itr = *min_element(cur.begin(), cur.end());

		cout << itr << "\n";
	}*/
	cout << idx << "\n";
}
// 응 이해 아예 잘못했어