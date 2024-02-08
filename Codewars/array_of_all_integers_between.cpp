/*
https://www.codewars.com/kata/55ecd718f46fba02e5000029/train/cpp
Complete the function that takes two integers (a, b, where a < b)
and return an array of all integers between the input parameters, including them.
For example:
a = 1
b = 4
--> [1, 2, 3, 4]
*/

#include <vector>
#include <list>
#include <iostream>
using namespace std;



std::vector<int> between(int start, int end) {
    std::vector<int> cpp_array;
    int num = end-start+1;
    auto *a = new int[num];
    int curr = start;
    for (int i = 0; i < num; i++){
        a[i] = curr;
        curr = curr+1;
    }
    cpp_array.assign(a,a+num);
    return cpp_array;
}

int main() {
    system("cls");
    cout << "Results" << endl;
    int start = 1; int end = 4;
    std::vector<int> cpp_array = between(start, end);

}
