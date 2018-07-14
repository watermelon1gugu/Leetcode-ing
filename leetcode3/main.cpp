#include <iostream>
#include <cstring>

using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int book[256];
        memset(book,-1, sizeof(book));
        int maxLength = 0;
        int idx = -1;
        for(int i = 0;i<s.size();i++){
            if(book[s[i]]>idx){
                idx = book[s[i]];
            }
            maxLength = i-idx > maxLength ? i - idx : maxLength;
            book[s[i]] = i;
        }
        return maxLength;
    }
};
int main() {


    string s = "abcabcbb";
    Solution solution;
    cout<<solution.lengthOfLongestSubstring(s)<<endl;

        return 0;
}