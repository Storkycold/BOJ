#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <stdlib.h>

using namespace std;

int main() {

	string str1, str2; 

	cin >> str1 >> str2; 

	int h1 = atoi(&str1[0]);
	int m1 = atoi(&str1[3]);
	int s1 = atoi(&str1[6]);
	int h2 = atoi(&str2[0]);
	int m2 = atoi(&str2[3]);
	int s2 = atoi(&str2[6]);
	int h3, m3, s3; 

	if (s1 <= s2) // 초 부터 계산 
	{
		s3 = s2 - s1; 
		m3 = m2; 
	}
	else // s1 > s2
	{
		s3 = 60 - s1 + s2; 
		m3 = m2 - 1;
	}
	if (m1 <= m3)
	{
		m3 = m3 - m1; 
		h3 = h2; 
	}
	else
	{
		m3 = 60 - m1 + m3; 
		h3 = h2 - 1;
	}
	if (h1 <= h3)
	{
		h3 = h3 - h1;
	}
	else
		h3 = 24 - h1 + h3; 

	printf("%02d:%02d:%02d\n", h3, m3, s3);
}