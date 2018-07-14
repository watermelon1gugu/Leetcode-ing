#include <iostream>
#include <math.h>
using namespace std;
class Solution {
public:
    string reverseString(string s) {
        string result;
        auto it = s.rbegin();
        while(it!=s.rend()){
            result+=*it;
            it++;
        }
        return result;
    }
};
int main() {

    return 0;
}