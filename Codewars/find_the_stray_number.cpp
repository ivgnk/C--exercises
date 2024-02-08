/*
https://www.codewars.com/kata/57f609022f4d534f05000024/train/cpp
You are given an odd-length array of integers, in which all of them are the same, except for one single number.
Complete the method which accepts such an array, and returns that single different number.
The input array will always be valid! (odd-length >= 3)
Examples
[1, 1, 2] ==> 2
[17, 17, 3, 17, 17, 17, 17] ==> 3
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int stray(std::vector<int> numbers) {
    int n =numbers.size();
    sort(numbers.begin(), numbers.end());
    if (numbers[0]==numbers[1])
        {return numbers[n-1];}
    else if (numbers[n-2] == numbers[n-1]) return numbers[0];
}

int main() {
    system("cls");
    printf("int stray(std::vector<int> numbers)\n");
    vector<int> numbers1 = {1, 1, 2};
    vector<int> numbers2 = {17, 17, 3, 17, 17, 17, 17};
    cout << "1  stray = "+ to_string(stray(numbers1)) << endl;
    cout << "2  stray = "+ to_string(stray(numbers2)) << endl;
}