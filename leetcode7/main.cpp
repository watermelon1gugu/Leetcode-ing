#include <iostream>

class Solution {
public:
        bool isPalindrome(int x) {
            if(x<0){
                return false;
            }
            else{
                if(x == reverse(x)){
                    return true;
                } else{
                    return false;
                }
            }
        }

private:
    int reverse(int x) {
        long long int result = 0;
        int offset = 1;
        if(x == INT32_MIN){
            return 0;
        }
        while(x !=0){
            result*=10;
            result+=x%10;
            x/=10;
        }
        if(x <0){
            result *= -1;
        }
        if(result>=INT32_MIN&&result<=INT32_MAX)
        return result;
        else return 0;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution solution;
    std::cout<<solution.isPalindrome(2)<<std::endl;
    std::cout<<INT32_MAX<<std::endl;
    return 0;
}