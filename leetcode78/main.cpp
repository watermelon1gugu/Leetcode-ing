#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> path;
        sort(nums.begin(),nums.end());
        result.push_back(path);
        helper(nums,0,path,result);
        return result;
    }

    void helper(vector<int>& path,int pos,vector<int>& nums,vector<vector<int>>& result){
        if(pos==nums.size()){
            return;
        }
        for(int i = pos;i<nums.size();i++){
            path.push_back(nums[i]);
            result.push_back(path);
            helper(path,i+1,nums,result);
            path.pop_back();
        }

    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}