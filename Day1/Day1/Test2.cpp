#define _CRT_SECURE_NO_WARNINGS

//https://www.nowcoder.com/practice/f0db4c36573d459cae44ac90b90c6212?tpId=182&tqId=34789&ru=/exam/oj

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	auto it1 = s1.begin();
	auto it2 = s2.begin();
	while (it1 != s1.end())
	{
		auto begin = it2;
		while (begin != s2.end())
		{
			if (*begin == *it1)
			{
				it1 = s1.erase(it1);
				--it1;
			}
			else
			{
				++begin;
			}
		}
		++it1;
	}
	cout << s1 << endl;
	return 0;
}
