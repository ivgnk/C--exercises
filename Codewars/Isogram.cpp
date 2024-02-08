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

bool is_isogram2(string the_str){
    int llen = the_str.length();
    // https://stackoverflow.com/questions/313970/how-to-convert-an-instance-of-stdstring-to-lower-case
    std::transform(the_str.begin(), the_str.end(), the_str.begin(), ::tolower);
    if (the_str.empty()) return 1;
    else {
        // как в с++ как строку string проверить на повторяющиеся символы
        // stackoverflow.com/questions/26574011/determine-if-all-characters-in-a-string-are-unique-in-c
        for (int i = 0; i < llen; i++) {
            for (int j = i + 1; j < llen; j++) {
                if (the_str[j] == the_str[i]) goto lab;
            } //------- cycle j
        } //------- cycle i
        return 1;
    } //------- else
    lab:
    return 0;
} //------- func

bool is_isogram(string the_str){
    int llen = the_str.length();
    // https://stackoverflow.com/questions/313970/how-to-convert-an-instance-of-stdstring-to-lower-case
    std::transform(the_str.begin(), the_str.end(), the_str.begin(), ::tolower);
    if (the_str.empty()) return 1;
    else {
        // как в с++ как строку string проверить на повторяющиеся символы
        // stackoverflow.com/questions/26574011/determine-if-all-characters-in-a-string-are-unique-in-c
        std::sort(the_str.begin(), the_str.end());
        bool uniq = std::unique(the_str.begin(), the_str.end()) == the_str.end();
        return uniq;
    } //------- else
    return 0;
} //------- func


int main() {
    system("cls");
    const int n = 3;
    string s0, s1;
    bool is_iso;
    // https://www.geeksforgeeks.org/array-of-strings-in-cpp-5-different-ways-to-create/
    string the_str[n] = {"Dermatoglyphics", "aBa", "moOse"};
    printf("\n");
    for (int i=0;i<n;i++){
        // printf("i = %d\n ",i);
        s0 = the_str[i];
        s1 = to_lower_case(s0);
        the_str[i] = to_lower_case(s0);
        is_iso = is_isogram2(the_str[i]);
        printf("%d  before=%s  after=%s is_iso=%d\n",i,s0.c_str(), s1.c_str(), is_iso); // ,
    }
    printf("The end\n");
    return 0;
}
