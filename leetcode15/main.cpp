#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size()<3){
            return result;
        }
        sort(nums.begin(),nums.end());
        int closest = NULL;
        for (auto it = nums.begin(); it < nums.end()-2; it++) {
            auto begin = it+1;
            auto end = nums.end()-1;
            while (begin < end) {
                int sum = *begin + *end + *it;
                if (0 > sum) {
                    begin++;
                } else if (0 < sum) {
                    end--;
                } else {
                    vector<int> temp;
                    temp.push_back(*begin);
                    temp.push_back(*it);
                    temp.push_back(*end);
                    result.push_back(temp);
                    while(*begin==*(begin+1)){
                        begin++;
                    }
                    while(*end==*(end-1)){
                        end--;
                    }
                    begin++;
                }
            }
            while( it < nums.end()-2  && *it == *(it+1))
                it++;
        }
        return result;
    }
};
int main() {
    vector<int> nums = {0,0,0,0,0};
    Solution solution;
    auto result = solution.threeSum(nums);
    for(auto it = result.begin(); it!= result.end();it++){
        for(auto init = (*it).begin(); init!=(*it).end();init++){
            cout<<*init<<" ";
        }
        cout<<endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}