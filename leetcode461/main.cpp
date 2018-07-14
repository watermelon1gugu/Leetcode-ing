#include <iostream>
using namespace std;
class Solution {
public:
    int hammingDistance(int x, int y) {
        if(x<y){
            return hammingDistance(y,x);
        }
        int result = 0;
        x ^= y;
        while (x != 0) {
            x&=x-1;
            result++;
        }
        return result;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution solution;
    cout<<solution.hammingDistance(1,3)<<endl;
    cout<<solution.hammingDistance(3,1)<<endl;


    return 0;
}