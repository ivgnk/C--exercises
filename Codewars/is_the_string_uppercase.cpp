/*
https://www.codewars.com/kata/56cd44e1aa4ac7879200010b/train/cpp
Create a method to see whether the string is ALL CAPS
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool is_uppercase(const std::string &s) {
    string s2 = s;
    // string s3 = s;
    // printf(" s2=%s s3=%s \n",s2.c_str(),s3.c_str());
    std::transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    return s2 == s;
}

int main() {
    printf("is_uppercase");
    system("cls");
    vector<string> s = {"c", "C", "hello I AM DONALD", "HELLO I AM DONALD",
                        "ACSKLDFJSgSKLDFJSKLDFJ", "ACSKLDFJSGSKLDFJSKLDFJ"};

    for (auto v:s){
        cout << v << endl;
        auto b = is_uppercase(v);
        cout << "    "+to_string(b) << endl;
    }
}