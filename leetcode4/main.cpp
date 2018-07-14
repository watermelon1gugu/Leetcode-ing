#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        std::cout<<fixed<<setprecision(1);
        int index1 = 0;
        int index2 = 0;
        int size = nums1.size() + nums2.size();
        vector<int> num;
        int book1 = 0;
        int book2 = 0;
        if(nums1.size()==0){
            num = nums2;
        }else if(nums2.size()==0){
            num = nums1;
        } else
        for (int i = 0; i < size; i++) {
            if (book1||nums1[index1] > nums2[index2]) {
                num.push_back(nums2[index2]);
                if(index2 == nums2.size()-1){
                    book2=1;
                } else{
                    index2++;
                }
            } else if(book2||nums1[index1] <= nums2[index2]){
                num.push_back(nums1[index1]);
                if(index1 == nums1.size()-1){
                    book1=1;
                } else{
                    index1++;
                }
            }
        }
        if(size%2 == 1){
            return num[size/2];
        } else{
            double t = (num[size/2-1]+num[size/2])*0.5;

            return t;

        }
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> num1 = {100000};
    vector<int> num2 = {100001};
    Solution solution;
    //cout<<100000.519999999999999<<endl;
    cout<<solution.findMedianSortedArrays(num1,num2)<<endl;
   // printf("%lf",solution.findMedianSortedArrays(num1,num2));
    return 0;
}