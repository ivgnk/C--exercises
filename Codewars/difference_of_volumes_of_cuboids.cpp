/*
https://www.codewars.com/kata/58cb43f4256836ed95000f97/train/cpp
you will create a program that will take two lists of integers, a and b.
Each list will consist of 3 positive integers above 0,
representing the dimensions of cuboids a and b.
You must find the difference of the cuboids' volumes regardless of which is bigger.

For example, if the parameters passed are ([2, 2, 3], [5, 4, 1]),
the volume of a is 12 and the volume of b is 20. Therefore, the function should return 8.
If you can, try writing it in one line of code.
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

const int nn=5;
using ar = std::array<int, 3>;
using ar2 = std::array<ar, nn>;

int findDifference(std::array<int, 3> a, std::array<int, 3> b) {
    return abs(a[0]*a[1]*a[2]-b[0]*b[1]*b[2]);
}
int main() {
    ar2 a_cube = {ar{3, 2, 5}, ar{9, 7, 2}, ar{11, 2, 5}, ar{4, 4, 7}, ar{15, 20, 25}};
    ar2 b_cube = {ar{1, 4, 4}, ar{5, 2, 2}, ar{1, 10, 8}, ar{3, 9, 3}, ar{10, 30, 25}};
    system("cls");
    printf("findDifference\n");
    printf("n=%d\n",nn);
    for (int i=0;i<nn;i++){
        cout << to_string(i)+"  findDifference = "+
        to_string(findDifference(a_cube[i],b_cube[i])) << endl;
    }
}