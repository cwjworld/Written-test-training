#define _CRT_SECURE_NO_WARNINGS

//https://www.nowcoder.com/practice/ac61207721a34b74b06597fe6eb67c52?tpId=182&tqId=34617&ru=/exam/oj

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string ret, a("0123456789ABCDEF");
    int M, N;
    cin >> M >> N;
    int flag = 1;
    if (M == 0)
    {
        cout << M << endl;
        return 0;
    }
    if (M < 0)
    {
        flag = 0;
        M = -M;
    }
    while (M)
    {
        ret += a[M % N];
        M /= N;
    }
    if (flag == 0)
    {
        ret += '-';
    }
    reverse(ret.begin(), ret.end());
    cout << ret;
    return 0;
}