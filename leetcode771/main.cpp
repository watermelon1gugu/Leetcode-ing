#include <iostream>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int result = 0;
        auto S_it = S.begin();
        auto J_it = J.begin();
        while(J_it!=J.end()){
            S_it = S.begin();
            while(S_it!=S.end()){
                if(*J_it == *S_it){
                    result++;
                    S.erase(S_it);
                } else{
                    S_it++;
                }
            }
            J_it++;
        }
        return result;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution solution;
    solution.numJewelsInStones("aA","aAAbbbb");
    return 0;
}