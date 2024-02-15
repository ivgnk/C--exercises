/*
 Exes and Ohs
https://www.codewars.com/kata/55908aad6620c066bc00002a/train/cpp
Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

Examples input/output:

XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true
XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
XO("zzoo") => false
 */


#include <iostream>

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// count_of_occurrences.cpp
unsigned int strCount(const std::string& word, char letter){
    // https://www.techiedelight.com/ru/count-occurrences-char-string-cpp/
    // if (word.empty()) return 0;
    return std::count(word.begin(), word.end(), letter);
}

bool XO(const std::string& str)
{
    string s=str;
    if (s.empty()) return true;
    // https://www.geeksforgeeks.org/tolower-function-in-cpp/
    for (auto& x : s) x = tolower(x);
    return (strCount(s, 'x')==strCount(s, 'o'));
}

vector<string> tst = {"ooxx", "xooxx", "ooxXm", "zpzpzpp", "zzoo"};

int main() {
    system("cls");
    cout << "Results" << endl;
    for (auto v: tst) {
        cout << v+" " << XO(v) << endl;
    }
}
