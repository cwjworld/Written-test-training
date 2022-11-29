#define _CRT_SECURE_NO_WARNINGS

// https://www.nowcoder.com/practice/e8a1b01a2df14cb2b228b30ee6a92163?tpId=13&tqId=11181&ru=/exam/oj

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param numbers int整型vector
     * @return int整型
     */
    int MoreThanHalfNum_Solution(vector<int>& numbers) {
        if(numbers.empty())
        {
            return 0;
        }
        int ret = numbers[0];
        int num = 1;
         
        for(int i = 1; i < numbers.size(); ++i)
        {
            if(num != 0)
            {
                if(numbers[i] == ret)
                {
                    ++num;
                }
                else
                {
                    --num;
                }
            }
            else
            {
                ret = numbers[i];
                num = 1;
            }
        }
        num = 0;
        for(int i = 0; i < numbers.size(); ++i)
        {
            if(numbers[i] == ret)
            {
                ++num;
            }
        }
        return (num > numbers.size()/2) ? ret :0;
    }
};
