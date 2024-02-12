/*
Fake Binary
https://www.codewars.com/kata/57eae65a4321032ce000002d/train/cpp
Given a string of digits,
 you should replace any digit below 5 with '0' and
 any digit 5 and above with '1'. Return the resulting string.
Note: input will never be an empty string
 */


#include <iostream>
#include <algorithm>
#include <vector>

#include <string>
using namespace std;

using namespace std;
char ss[]={'0','1','2','3','4','5','6','7','8','9'};
std::string fakeBin(std::string str){
    for (int i=1;i<5;i++) replace(str.begin(), str.end(), ss[i], '0');
    for (int i=5;i<=9;i++) replace(str.begin(), str.end(), ss[i], '1');
    return str;
}

int main() {
    system("cls");
    cout << "Results fake_binary.cpp" << endl;
    string s;
    cout << fakeBin("45385593107843568") << endl;
}
