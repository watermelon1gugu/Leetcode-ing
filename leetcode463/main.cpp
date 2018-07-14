#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int result = 0;
        for(int row = 0;row<grid.size(); row++){
            for(int col = 0;col<grid[0].size(); col++){
                if(grid[row][col]==1){
                    if(row-1==-1||grid[row-1][col]==0){
                     result++;
                    }
                    if(row+1==grid.size()||grid[row+1][col]==0){
                        result++;
                    }
                    if(col-1==-1||grid[row][col-1]==0){
                        result++;
                    }
                    if(col+1==grid[0].size()||grid[row][col+1]==0){
                        result++;
                    }
                }
            }
        }
        return result;
    }
};
int main() {
    Solution solution;
    vector<vector<int>> v;
    vector<int> a = {0,1,0,0};
    vector<int> b = {1,1,1,0};
    vector<int> c = {0,1,0,0};
    vector<int> d = {1,1,0,0};
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
  cout<< solution.islandPerimeter(v);

    return 0;
}