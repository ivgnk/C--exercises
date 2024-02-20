/*
 Lario and Muigi Pipe Problem
 https://www.codewars.com/kata/56b29582461215098d00000f/train/cpp
 Given a list of unique numbers sorted in ascending order,
 return a new list so that the values increment by 1
 for each index from the minimum value up to the maximum value (both included).
 Example
 Input:  1,3,5,6,7,8 Output: 1,2,3,4,5,6,7,8
 */

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

std::vector<int> pipe_fix(const std::vector<int>& nums) {
    if (nums.empty()) return nums;
    int min_ = nums[0];
    int max_ = nums[nums.size()-1];
    vector<int> res={};
    for (int i=min_;i<=max_;i++) res.push_back(i);
    return res;
}

int main() {
    system("cls");
    cout << "Results" << endl;
}
