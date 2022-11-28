#define _CRT_SECURE_NO_WARNINGS

// https ://www.nowcoder.com/questionTerminal/2d3f6ddd82da445d804c95db22dcc471

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    a.resize(n + 1);
    for (auto& e : a)
    {
        cin >> e;
    }
    a[n] = 0;
    int count = 0;
    int i = 0;
    while (i < n)
    {
        if (a[i] < a[i + 1])
        {
            while (a[i] < a[i + 1] && i < n)
            {
                i++;
            }
            count++;
            i++;
        }
        if (a[i] == a[i + 1])
        {
            i++;
        }
        if (a[i] > a[i + 1])
        {
            while (a[i] > a[i + 1] && i < n)
            {
                i++;
            }
            count++;
            i++;
        }
    }
    cout << count;
}