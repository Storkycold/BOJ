#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <string.h>
#include <stdio.h>

using namespace std;

typedef long long ll;
/*typedef struct res
{
	char str[10];
	ll a; 
	ll b; 

}res;
*/

int main() {

	// res resist[] = { {"black", 0, 1}, {"brown", 1, 10}, {"red", 2, 100}, {"orange", 3, 1000}, {"yellow", 4, 10000}, {"green", 5, 100000}, {"blue", 6, 1000000}, {"violet", 7, 10000000}, {"grey", 8, 100000000}, {"white", 9, 1000000000}};

	char a[10] = { 0, };
	char b[10] = { 0, };
	char c[10] = { 0, };

	ll sum = 0;

	cin >> a >> b >> c;

	if (strcmp(a, "black") == 0)
		sum = 0;
	else if (strcmp(a, "brown") == 0)
		sum = 10;
	else if (strcmp(a, "red") == 0)
		sum = 20;
	else if (strcmp(a, "orange") == 0)
		sum = 30;
	else if (strcmp(a, "yellow") == 0)
		sum = 40;
	else if (strcmp(a, "green") == 0)
		sum = 50;
	else if (strcmp(a, "blue") == 0)
		sum = 60;
	else if (strcmp(a, "violet") == 0)
		sum = 70;
	else if (strcmp(a, "grey") == 0)
		sum = 80;
	else if (strcmp(a, "white") == 0)
		sum = 90; 

	if (strcmp(b, "black") == 0)
		sum += 0;
	else if (strcmp(b, "brown") == 0)
		sum += 1;
	else if (strcmp(b, "red") == 0)
		sum += 2;
	else if (strcmp(b, "orange") == 0)
		sum += 3;
	else if (strcmp(b, "yellow") == 0)
		sum += 4;
	else if (strcmp(b, "green") == 0)
		sum += 5;
	else if (strcmp(b, "blue") == 0)
		sum += 6;
	else if (strcmp(b, "violet") == 0)
		sum += 7;
	else if (strcmp(b, "grey") == 0)
		sum += 8;
	else if (strcmp(b, "white") == 0)
		sum += 9;

	if (strcmp(c, "black") == 0)
		sum *= 1;
	else if (strcmp(c, "brown") == 0)
		sum *= 10;
	else if (strcmp(c, "red") == 0)
		sum *= 100;
	else if (strcmp(c, "orange") == 0)
		sum *= 1000;
	else if (strcmp(c, "yellow") == 0)
		sum *= 10000;
	else if (strcmp(c, "green") == 0)
		sum *= 100000;
	else if (strcmp(c, "blue") == 0)
		sum *= 1000000;
	else if (strcmp(c, "violet") == 0)
		sum *= 10000000;
	else if (strcmp(c, "grey") == 0)
		sum *= 100000000;
	else if (strcmp(c, "white") == 0)
		sum *= 1000000000;

	cout << sum << "\n";
	return 0; 
}