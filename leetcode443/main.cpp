#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        int numBuff = 1;
        int length = 0;
        for(int i = 0;i<chars.size();i++){
            if(chars[i]!=chars[i+1]||i==chars.size()-1){
                chars[length] = chars[i];
                length++;
                if(numBuff!=1) {
                    string temp = to_string(numBuff);
                    for(int k = 0;k<temp.size();k++) {
                        chars[length] = temp[k];
                        length++;
                    }
                }
                numBuff = 1;
            } else{
                numBuff++;
            }
        }
        return length;
    }
};
int main() {
    Solution solution;
    vector<char> v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('c');
    v.push_back('c');
    v.push_back('c');
    v.push_back('c');
    v.push_back('c');
    int n = solution.compress(v);

    for(int i = 0;i<n;i++)
    cout<<v[i]<<endl;


    return 0;
}