#include <iostream>
#include <stack>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        if (s.size() % 2 == 1) {
            return false;
        } else {
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                    stack.push(s[i]);
                } else {
                    if(stack.size()>0) {
                        if ((stack.top() == '(' && s[i] == ')') || (stack.top() == '[' && s[i] == ']') ||
                            (stack.top() == '{' && s[i] == '}')) {
                            stack.pop();
                        } else {
                            return false;
                        }
                    } else{
                        return false;
                    }
                }
            }
            if(stack.size()==0)
            return true;
            else return false;
        }
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}