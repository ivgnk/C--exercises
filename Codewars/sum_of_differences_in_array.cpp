/*
https://www.codewars.com/kata/5b73fe9fb3d9776fbf00009e/train/cpp
Sum of differences in array
Your task is to sum the differences between consecutive pairs in the array in descending order.
Example
[2, 1, 10]  -->  9
In descending order: [10, 2, 1]
Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9
If the array is empty or the array has only one element the result should be 0
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int sumOfDifferences(const std::vector<int>& arr){
    vector<int> arr2;
    int sum_=0;
    arr2 = arr;
    sort(arr2.rbegin(),arr2.rend());
    for (int i=1;i<arr2.size();i++) sum_ = sum_ + (arr2[i-1]-arr2[i]);
    return sum_;
}

// Best of Codewars
//  int sumOfDifferences(const std::vector<int>& arr) {
//  if (arr.empty()) return 0;
//  auto p = std::minmax_element(arr.cbegin(), arr.cend());
//  return *p.second - *p.first;
//}
int main() {
    int res;
    system("cls");
    cout << "Results" << endl;
    vector<int> vec;
    vec = {1,2,10}; res = sumOfDifferences(vec);
    printf("  res=%d\n\n", res);

}
