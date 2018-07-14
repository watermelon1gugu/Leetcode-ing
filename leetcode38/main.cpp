#include <iostream>
using namespace std;
class Solution {

public:
    string countAndSay(int n) {
        string result = "1";
        for(int i = 0;i<n-1;i++){
            result = getNext(result);
        }
        return result;
    }
private:
    string getNext(string str){
        int numBuff = 48;
        char charBuff;
        string result("");
        for(int i = 0;i<str.size()+1;i++){

            if(charBuff!=str[i]){
                if(numBuff!=48) {
                    result += numBuff;
                    result += charBuff;
                }
                charBuff=str[i];
                numBuff=49;
            } else{
                numBuff++;
            }
        }
        return result;
    }
};
int main() {
    string a("112");
    Solution solution;
    cout<<solution.countAndSay(4)<<endl;
    return 0;
}