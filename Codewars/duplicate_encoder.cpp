/*
Duplicate Encoder
The goal of this exercise is to convert a string to a new string
 where each character in the new string is "(" if that character appears only once in the original string,
 or ")" if that character appears more than once in the original string.
 Ignore capitalization when determining if a character is a duplicate.
Examples
"din"      =>  "((("
"recede"   =>  "()()()"
"Success"  =>  ")())())"
"(( @"     =>  "))(("
 */


#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<string> train_arr = {"din", "recede", "Success", "CodeWarrior", "Supralapsarian", "(( @", " ( ( )"};

string duplicate_encoder2(const string& word){
    string s = word; string news="";
    // https://www.geeksforgeeks.org/tolower-function-in-cpp/
    for (auto& x : s) x = tolower(x);
    // printf("%s\n",s.c_str());
    // https://stackoverflow.com/questions/3867890/count-character-occurrences-in-a-string-in-c
    for (auto v:s)
    {
        string::difference_type nn = count(s.begin(), s.end(), v);
        // printf("%c%d   ", v, int(nn));
        if (nn==1) news.push_back('(');
              else news.push_back(')');
    };
    // printf("\n\n");
    return news;
}

string duplicate_encoder(const string& word){
    string s = word; string news="";
    for (auto& x : s) x = tolower(x);
    for (auto v:s)
    {
        string::difference_type nn = count(s.begin(), s.end(), v);
        if (nn==1) news.push_back('(');
        else news.push_back(')');
    };
    return news;
}


int main() {
    system("cls");
    cout << "Results fake_binary.cpp" << endl;
    for (auto v: train_arr){
        duplicate_encoder(v);
    }
    string s;
}
