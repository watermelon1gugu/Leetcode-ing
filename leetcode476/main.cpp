#include <iostream>
using namespace std;
class Solution {
public:
    int findComplement(int num) {
        int temp = num;
        int offset = 0;
        if(temp<0){
            temp*=-1;
        }
        while(temp>0){
            offset = offset*2+1;
            temp/=2;
        }
        num^=offset;
        return num;
    }
};
int main(void){
    Solution solution;
    cout<<solution.findComplement(5)<<endl;
}