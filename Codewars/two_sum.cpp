/*
Two Sum
https://www.codewars.com/kata/52c31f8e6605bcc646000082/train/cpp
Write a function that takes an array of numbers (integers for the tests) and a target number.
It should find two different items in the array that, when added together, give the target value.
The indices of these items should then be returned in a tuple / list (depending on your language) like so: (index1, index2).
For the purposes of this kata, some tests may have multiple answers; any valid solutions will be accepted.

The input will always be valid (numbers will be an array of length 2 or greater, and all of the items will be numbers;
target will always be the sum of two different items from that array).
Based on: https://leetcode.com/problems/two-sum/

two_sum({1, 2, 3}, 4); // returns {0, 2} or {2, 0}
two_sum({3, 2, 4}, 6); // returns {1, 2} or {2, 1}
 */


#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

pair<size_t, size_t> two_sum(const vector<int>& num, int target) {
    int n = num.size();
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (num[i]+num[j]==target) return pair{i,j};
        }
    }
}


int main() {
    system("cls");
    pair para={0,0};
    para = two_sum({1, 2, 3}, 4);
    cout << "Results" << endl;
    cout << para.first <<" "<<para.second  << endl;
}
