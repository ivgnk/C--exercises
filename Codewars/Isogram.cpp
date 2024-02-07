/*
https://www.codewars.com/kata/54ba84be607a92aa900000f1/train/cpp

An isogram is a word that has no repeating letters, consecutive or non-consecutive.
 Implement a function that determines
 whether a string that contains only letters is an isogram.
 Assume the empty string is an isogram. Ignore letter case.
Example: (Input --> Output)
"Dermatoglyphics" --> true
"aba" --> false "moOse" --> false
(ignore letter case)

 */

// #include <string>
#include <cstring>
// #include <stdio.h>
#include <iostream>
#include <windows.h>
#include <algorithm>
// #include <cctype>

using namespace std;

string to_lower_case(string s){
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

bool is_isogram(string the_str){
    int llen = the_str.length();
    // https://stackoverflow.com/questions/313970/how-to-convert-an-instance-of-stdstring-to-lower-case
    std::transform(the_str.begin(), the_str.end(), the_str.begin(), ::tolower);
    if (the_str =="") return 0;
    else if
        // как в с++ как строку string проверить на повторяющиеся символы
        // stackoverflow.com/questions/26574011/determine-if-all-characters-in-a-string-are-unique-in-c
        for (std::string::size_type pos = 0; pos < s.size(); pos++) {
            char c = s[pos]; // do something with the char now
        }


    return 0;
}

int main() {
    system("cls");
    const int n = 3;
    string s0, s1;
    // https://www.geeksforgeeks.org/array-of-strings-in-cpp-5-different-ways-to-create/
    string the_str[n] = {"Dermatoglyphics", "aBa", "moOse"};
    printf("\n");
    for (int i=0;i<n;i++){
        // printf("i = %d\n ",i);
        s0 = the_str[i];
        s1 = to_lower_case(s0);
        the_str[i] = to_lower_case(s0);
        printf("%d  before=%s  after=%s \n",i,s0.c_str(), s1.c_str()); // ,
    }
    printf("The end\n");
    return 0;
}
