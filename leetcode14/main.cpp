#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        int index = 0;
        int flag = 1;
        if(strs.size()==0){
            return result;
        }
        if(strs.size()==1){
            return strs[0];
        }
        while (flag) {
            int i = 0;
            while  (i < strs.size() - 1) {
                if (strs[i][index] != strs[i + 1][index] || index>strs[i].size()) {
                    return result;
                }
                i++;
            }
            result+=strs[i][index];
            index++;
        }
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<string> aaa;
    aaa.push_back("aaba");
    aaa.push_back("aaa");
    aaa.push_back("aa");
    aaa.push_back("aa");
    aaa.push_back("aa");
    Solution solution;
    cout<<solution.longestCommonPrefix(aaa)<<endl;
    return 0;
}