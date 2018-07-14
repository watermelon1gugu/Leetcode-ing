#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        string temp;
        string result;
        auto it = s.begin();
        while(it!=s.end()){
            if(*it!=' '){
                temp+=*it;
            } else{
                result+=reverse(temp)+" ";
                temp = "";
            }

            it++;
        }
        return result+=reverse(temp);
    }

    string reverse(string s){
        string a;
        auto it = s.rbegin();
        while(it!=s.rend()){
            a+=*it;
            it++;
        }
        return a;
    }
};
int main() {
    Solution solution;
    cout<<solution.reverseWords("Let's take LeetCode contest")<<endl;
    return 0;
}