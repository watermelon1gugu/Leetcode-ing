#include <iostream>
#include <climits>

using namespace std;
class Solution
{
public:
    int myAtoi(string str)
    {
        if(str == "")
            return 0;
        int i = 0;
        long long res = 0;
        while(str[i] != '\0' && str[i] == ' ')
        {
            i ++;//舍弃前面空格
        }
        int flag = 1;
        if(str[i] == '-')//确定正负
        {
            flag = -1;
            i ++;
        }
        else if(str[i] == '+')
        {
            i ++;
        }
        while(str[i] != '\0')
        {
            if(str[i] >= '0' &&str[i] <= '9')
            {
                res = res*10 + str[i] - '0';
                if(res > INT_MAX)
                {
                    if(flag == 1)
                        return INT_MAX;
                    else
                        return INT_MIN;
                }
                i ++;
            }
            else break;
        }
        res = flag * res;
        return (int)res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}