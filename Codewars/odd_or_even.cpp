/*
Odd or Even?
https://www.codewars.com/kata/5949481f86420f59480000e7/train/cpp
Given a list of integers, determine whether the sum of its elements is odd or even.
Give your answer as a string matching "odd" or "even".
If the input array is empty consider it as: [0] (array with a zero).

Examples:
Input: [0]
Output: "even"

Input: [0, 1, 4]
Output: "odd"

Input: [0, -1, -5]
Output: "even"
 */
#include "iostream"
#include "string"
#include <vector>
#include <numeric>
using namespace std;

std::string odd_or_even(const std::vector<int> &arr)
{
    if (arr.size()==0) return "even";
    // https://stackoverflow.com/questions/3221812/how-to-sum-up-elements-of-a-c-vector
    int sum_of_elems = std::accumulate(arr.begin(), arr.end(), 0);
    string res = (sum_of_elems % 2) == 0 ? "even" : "odd";
    return res;
}



int main() {
    system("cls");
    cout << "Results" << endl;
    for (int i=1; 0<=26; i++){
        printf("i=%2d   i%6=%2d  %s \n",i,i%6);
    }

}