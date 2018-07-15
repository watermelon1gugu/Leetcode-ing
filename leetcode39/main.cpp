#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
        vector<vector<int>> result;
        vector<int> book;
        combinate(result, book, candidates, candidates.size() - 1, target);
        return result;
    }

private:
    void combinate(vector<vector<int>> &result, vector<int> &book, vector<int> &candidates, int index, int target) {
        if (target == 0) {
            result.push_back(book);
            return;
        }
        if (target < 0) {
            return;
        }

        if (index >= 0) {
            book.push_back(candidates[index]);
            combinate(result, book, candidates, index, target - candidates[index]);
            book.pop_back();
            combinate(result, book, candidates, index - 1, target);
        }
    }
    vector<vector<int>> getCartesianProduct(vector<vector<int>> &a, vector<vector<int>> &b) {
        vector<vector<int>> result;
        for (int i = 0; i < a.size(); i++) {
            for (int k = 0; k < b.size(); k++) {
                vector<int> temp;
                temp.insert(temp.end(), a[i].begin(), a[i].end());
                temp.insert(temp.end(), b[k].begin(), b[k].end());
                result.push_back(temp);
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> s = {2, 3, 6, 7};
    vector<vector<int>> r = solution.combinationSum(s, 7);

    for (int i = 0; i < r.size(); i++) {
        auto it = r[i].begin();
        while (it != r[i].end()) {
            cout << *it;
            it++;
        }
        cout << endl;
    }
    return 0;
}