#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        int step[2];
        string result;
        for(int i = 0;i<numRows;i++){
            step[result.length()%2] = (numRows-1-i)*2==0?2*i:(numRows-1-i)*2;
            step[!(result.length()%2)] = 2*i==0?(numRows-1-i)*2:2*i;
            for(int col = i;col<s.length();col+= step[!(result.length()%2)]){
                result.push_back(s[col]);
            }
        }
        return result;
    }
};
int main() {
    Solution solution;
    cout<<solution.convert("ABCDEFGHIJKLMNOPQ",4)<<endl;
    return 0;
}