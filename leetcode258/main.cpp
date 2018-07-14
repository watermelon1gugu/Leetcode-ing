#include <iostream>

class Solution {
public:
    int addDigits(int num) {
        return 1 + (num - 1) % 9;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}