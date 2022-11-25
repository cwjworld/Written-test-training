#define _CRT_SECURE_NO_WARNINGS

// https://www.nowcoder.com/questionTerminal/6736cc3ffd1444a4a0057dee89be789b

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<int>a(3 * n);
		long total = 0;
		for (int i = 0; i < 3 * n; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = n; i <= 3 * n - 2; i += 2)
		{
			total += a[i];
		}
		cout << total << endl;
	}
}

	