#define _CRT_SECURE_NO_WARNINGS

// https://www.nowcoder.com/practice/bd891093881d4ddf9e56e7cc8416562d?tpId=182&tqId=34785&ru=/exam/oj

#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    string str, ret, cur;
    cin >> str;
    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            cur += str[i];
        }
        else
        {
            if (ret.size() < cur.size())
            {
                ret = cur;
            }
            else
            {
                cur.clear();
            }
        }
    }
    cout << ret;
    return 0;
}

