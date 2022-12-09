#define _CRT_SECURE_NO_WARNINGS

// https://www.nowcoder.com/practice/5a304c109a544aef9b583dce23f5f5db?tpId=182&tqId=34613&ru=/exam/oj

#include <iostream>
#include <vector>
using namespace std;

int GetMax(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int num;
    cin >> num;
    vector<int>arr;
    arr.resize(num);
    for (int i = 0; i < num; ++i)
    {
        cin >> arr[i];
    }

    int Total = arr[0];
    int Max = arr[0];
    for (int i = 1; i < num; ++i)
    {
        Total = GetMax(arr[i], Total + arr[i]);
        if (Total > Max)
        {
            Max = Total;
        }
    }
    cout << Max;
    return 0;
}