#define _CRT_SECURE_NO_WARNINGS

// https ://www.nowcoder.com/questionTerminal/8869d99cf1264e60a6d9eff4295e5bab

#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1;
    while (cin >> str2)
    {
        str1.insert(0, " ");
        str1.insert(0, str2);
    }
    cout << str1 << endl;
    return 0;
}