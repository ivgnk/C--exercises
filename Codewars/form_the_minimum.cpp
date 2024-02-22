/*
Form The Minimum
Given a list of digits, return the smallest number that could be formed from these digits,
using the digits only once (ignore duplicates).
Notes:
Only positive integers will be passed to the function (> 0 ), no negatives or zeros.
Input >> Output Examples
minValue ({1, 3, 1})  ==> return (13)
 */

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

unsigned long long minValue (vector <int> values)
{
    set<string> res = {};
    string  s;
    unsigned long long uul;
    for (auto v:values){
        s = to_string(v);   res.insert(s);
    }
    s="";
    for (auto v:res) s = s  + v;
    // https://stackoverflow.com/questions/21422753/convert-a-string-to-a-unsigned-long-long-in-c
    uul = std::stoull(s);
    return  uul; ;
}

int main() {
    unsigned long long uul;
    system("cls");
    cout << "Results" << endl;
    uul = minValue({1,3,1});
    cout << "minValue = "<< uul << endl;
    }
