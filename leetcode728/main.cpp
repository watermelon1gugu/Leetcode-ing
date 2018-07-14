#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i = left;i<=right;i++){
            if(i<10){
                result.push_back(i);
            }else{

                int flag = 1;
                int temp = i;
                while(temp>0){
                    if(temp%10!=0){
                        if((i%(temp%10))!=0){
                            flag= 0;
                        }
                    } else{
                        flag = 0;
                    }
                    temp/=10;
                }
                if(flag){
                    result.push_back(i);
                }
            }
        }
        return result;
    }
};
int main() {
   // std::cout << 10%(10%10) << std::endl;
    Solution solution;
   solution.selfDividingNumbers(1,22);
    return 0;
}