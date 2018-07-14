#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        auto A_it = A.begin();
        while(A_it!=A.end()){
            help(*A_it);
            A_it++;
        }
        return A;
    }

private:
    void help(vector<int>& A){
        vector<int> temp = A;
        auto temp_it = temp.rbegin();
        auto A_it = A.begin();
        while(temp_it!=temp.rend()){
            *A_it = *temp_it^1;
            A_it++;
            temp_it++;
        }
    }
};
int main() {
    vector<int> v = {0,1,1};
    Solution solution;
    solution.help(v);
    return 0;
}