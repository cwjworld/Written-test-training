#define _CRT_SECURE_NO_WARNINGS

// https://www.nowcoder.com/practice/9d1559511b3849deaa71b576fa7009dc?tpId=122&tqId=33664&ru=/exam/oj

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
bool Come(string& n)
{
    int begin = 0, end = n.size() - 1;
    while(begin < end)
    {
        if(n[begin] != n[end])
        {
            return false;
        }
        begin++;
        end--;
    }
    return true;
}
 
int main()
{
    string a, b;
    int count = 0;
    getline(cin, a);
    getline(cin, b);
    for(int i = 0; i <= a.size(); i++)
    {
        string ret = a;
        ret.insert(i, b);
        if(Come(ret))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}