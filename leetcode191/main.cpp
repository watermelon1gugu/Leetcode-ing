#include <iostream>
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        while(n!=0){
            n&=(n-1);
            result++;
        }
        return result;
    }
};
int main() {
    Solution solution;
  //  solution.hammingWeight(1);

    return 0;
}