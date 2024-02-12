/*
https://www.codewars.com/kata/54bf85e3d5b56c7a05000cf9/train/cpp
Write a function which takes a list of strings and returns each line prepended by the correct number.
The numbering starts at 1. The format is n: string. Notice the colon and space in between.
Examples: (Input --> Output)

[] --> []
["a", "b", "c"] --> ["1: a", "2: b", "3: c"]
 */


#include <iostream>
#include <algorithm>
#include <vector>

#include <string>
using namespace std;
using t1 = vector<string>;
t1 number2(t1 lines)
{
    int n = lines.size();
    for (int i=0;i<n;i++){
        lines[i] = to_string(i+1)+": "+lines[i];
    }
    return lines;
}

std::vector<std::string> number(const std::vector<std::string> &lines)
{
    std::vector<std::string> lin = lines;
    int n = lines.size();
    for (int i=0;i<n;i++){
        lin[i] = to_string(i+1)+": "+lin[i];
    }
    return lin;
}


int main() {
    system("cls");
    t1 v{"a", "b", "c"};
    cout << "Results" << endl;
    v = number(v);
    for (int i=0;i<v.size();i++){
    cout << v[i] << endl;
    }
}
