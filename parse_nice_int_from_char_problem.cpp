/*
Parse nice int from char problem
https://www.codewars.com/kata/557cd6882bfa3c8a9f0000c1/train/cpp
You ask a small girl,"How old are you?" She always says, "x years old", where x is a random number between 0 and 9.
Write a program that returns the girl's age (0-9) as an integer.
Assume the test input string is always a valid string.
For example, the test input may be "1 year old" or "5 years old".
The first character in the string is always a number.
*/


#include <string>
#include <iostream>
#include <numeric>

using namespace std;

int get_age(const std::string& she_said) {
    string s2 = she_said.substr(0,1);
    return stoi(s2);
}

int main() {
    system("cls");
    cout << "Results" << endl;
    string s ="5 years old";
    string s2 = s.substr(0,1);
    int i = stoi(s2);
    cout << s << endl;
    cout << s2 << endl;
    cout << i << endl;
    cout << stoi(s) << endl;
}