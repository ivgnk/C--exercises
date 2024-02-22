
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        int n = nums.size();
        vector<int> res={-1,-1};
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((nums[i] + nums[j]) == target) {
                    res[0] = i;
                    res[1] = j;
                } //--- if
            } //--- for j
        } //--- for i
        return res;
    } //--- func
}; //--- class

int main() {
    vector<int> res;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    system("cls");
    cout << "Results" << endl;
    auto res1 = new Solution;
    res = res1->twoSum(nums, target);
    cout << res[0]<< endl;
    cout << res[1]<< endl;
}