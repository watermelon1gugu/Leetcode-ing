#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int> &nums, int target) {
        sort(nums.begin(),nums.end());
        int closest = NULL;
        int result;
        for (auto it = nums.begin()+1; it != nums.end()-1; it++) {
            auto begin = nums.begin();
            auto end = nums.end()-1;
            while (begin != it && end != it) {
                int sum = *begin + *end + *it;
                int close = abs(target - sum);
                if (closest == NULL || close < closest) {
                    closest = close;
                    result = sum;
                }
                if (target > sum) {
                    begin++;
                } else if (target < sum) {
                    end--;
                } else {
                    return sum;
                }

            }
        }
        return result;

    }
};

int main() {
    vector<int> nums = {-1,2,1,-4};
    Solution solution;
    cout<< solution.threeSumClosest(nums,1)<<endl;


    return 0;
}