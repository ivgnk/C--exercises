/*
There is an array with some numbers. All numbers are equal except for one. Try to find it!
find_uniq(std::vector<float>{1, 1, 1, 2, 1, 1});  // --> 2
find_uniq(std::vector<float>{0, 0, 0.55, 0, 0});  // --> 0.55
It’s guaranteed that array contains at least 3 numbers.

The tests contain some very huge arrays, so think about performance.

This is the first kata in series:
Find the unique number (this kata)
Find the unique string
Find The Unique
 */


#include <iostream>

#include <vector>
#include <algorithm>

using namespace std;

float find_uniq2(const vector<float> &v) {
    vector<float> vec = v;
    int n = vec.size();
    sort(vec.begin(), vec.end());
    if (vec[0] == vec[1]) return vec[n - 1];
    else return vec[0];
}

float find_uniq(const vector<float> &v) {
    vector<float> vec = v;
    auto min_value = *std::min_element(vec.begin(),vec.end());
    auto mav_value = *std::max_element(vec.begin(),vec.end());
    if ((vec[0]==min_value) && (vec[1]==min_value)) return mav_value;
    else return min_value;
}


int main() {
    system("cls");
    cout << "Results" << endl;
}
