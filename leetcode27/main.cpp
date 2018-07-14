#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            int offset = 0;
            int flag = 0;
            while (nums[i + offset] == val&&i+offset<size) {
                offset++;
                flag = 1;
            }
            if (flag) {
                for (int k = i; k + offset < nums.size(); k++) {
                    nums[k] = nums[k + offset];
                }
                size-=offset;
            }
        }
        return size;
    }
};

int main() {

    vector<int> s = {3, 3};
    Solution solution;
    solution.removeElement(s, 3);
    return 0;
}