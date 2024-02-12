/*
 https://www.codewars.com/kata/57a1fd2ce298a731b20006a4/train/cpp
 Is it a palindrome?
Write a function that checks if a given string (case insensitive) is a palindrome.
A palindrome is a word, number, phrase, or other sequence of symbols
that reads the same backwards as forwards, such as madam or racecar.
 */

#include <iostream>
#include <algorithm>
#include <vector>

#include <string>
using namespace std;

bool isPalindrom (const std::string& str)
{
    string s = str;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int n = s.size();
    if (n==1) return true;
    int divi = n / 2;
    bool b = true;
    for (int i=0;i<divi;i++) {
        b = b && (s[i]==s[n-1-i]);
        if (!b) return false;
    }
    return b;
}

int main() {
    vector<string> s = {"a", "aba", "Abba", "hello"};

    system("cls");
    cout << "Results is_it_a_palindrome.cpp" << endl;
    for (auto v:s){
        cout << v <<" "<< isPalindrom(v) << endl;
    }
}
