#include <iostream>
#include <set>

using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        while(n != 1){
            int sum  = 0;
            while(n){
                sum+=(n%10)*(n%10);
                n/=10;
            }
            n=sum;
            if(s.find(n)!=s.end()){
                break;
            } else{
                s.insert(n);
            }
        }
        return n==1;

    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}