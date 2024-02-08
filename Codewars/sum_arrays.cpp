/*
https://www.codewars.com/kata/53dc54212259ed3d4f00071c/train/cpp
Write a function that takes an array of numbers
and returns the sum of the numbers.
The numbers can be negative or non-integer.
If the array does not contain any numbers then you should return 0.
 */

#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;
using vec = vector<int>;

int sum(std::vector<int> nums) {
    if (nums.empty()) return 0;
    auto result = std::reduce(nums.begin(), nums.end());
    return result;
}
int main() {
    system("cls");
    printf("sum_arrays.cpp\n");
    vec numbers0 = {};
    vec numbers1 = {5};
    vec numbers2 = {-5};
    vec numbers3 = {1, 2, 3, 4};
    vec numbers4 = {1, 2, -3, 3, 4};
    cout << "sum numbers0 = "+ to_string(sum(numbers0)) << endl;
    cout << "sum numbers1 = "+ to_string(sum(numbers1)) << endl;
    cout << "sum numbers2 = "+ to_string(sum(numbers2)) << endl;
    cout << "sum numbers3 = "+ to_string(sum(numbers3)) << endl;
    cout << "sum numbers4 = "+ to_string(sum(numbers4)) << endl;
}