/*
https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097/train/cpp
The first century spans from the year 1 up to and including the year 100,
the second century - from the year 101 up to and including the year 200, etc.

Task
Given a year, return the century it is in.

Examples
1705 --> 18
1900 --> 19
1601 --> 17
2000 --> 20
2742 --> 28
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int centuryFromYear(int year)
{
    int ost = year % 100;
    int century = round(year / 100)+1;
    if (ost == 0) century =century - 1;
    // cout << century << endl;
    return century;
}

int main() {
    system("cls");
    vector<int> dat = {1705, 1900, 1601, 2000, 2742};
    cout << "Results" << endl;
    for (auto v:dat)
        cout <<  centuryFromYear(v) << endl;
}

// Codewars BEST
//constexpr int centuryFromYear(int year)
//{
//    return (year + 99) / 100;
//}
