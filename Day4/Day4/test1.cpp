#define _CRT_SECURE_NO_WARNINGS

// https://www.nowcoder.com/practice/02d8d42b197646a5bbd0a98785bb3a34?tpId=122&tqId=33679&ru=/exam/oj

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    int a1, b1, b2, c1;
    cin >> a >> b >> c >> d;
    //ȡ2B
    b1 = (c - a) / 2;
    b2 = (b + d) / 2;
    if (b1 != b2)
    {
        cout << "No";
    }
    else
    {
        cout << c - b1 << " " << b1 << " " << d - b1;
    }
    return 0;
}