#include <iostream>
using namespace std;
class Solution {
public:
    bool judgeCircle(string moves) {
        auto m = moves.begin();
        int x = 0;
        int y = 0;
        while(m!=moves.end()){
            switch (*m){
                case 'R': x++;
                    break;
                case 'L': x--;
                    break;
                case 'U': y++;
                    break;
                case 'D': y--;
                    break;
            }
            m++;
        }
        if(x==0&&y==0) return true;
        else return false;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}