#include <iostream>

class Solution {
public:
    long countDigitOne(long n) {
        long  result = 0;
        long  left = 0;
        long  right = 0;
        long  index = 1;
        while(n>=index){
            left = n/index;
            right = n%index;
            result += (left+8)/10*index;
            if(left%10==1)
                result+=right+1;
            index*=10;
        }
        return result;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}