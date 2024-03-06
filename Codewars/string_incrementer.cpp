/*
https://www.codewars.com/kata/54a91a4883a7de5d7800009c/train/cpp
String incrementer

Your job is to write a function which increments a string, to create a new string.
If the string already ends with a number, the number should be incremented by 1.
If the string does not end with a number. the number 1 should be appended to the new string.
Examples:
foo -> foo1
foobar23 -> foobar24
foo0042 -> foo0043
foo9 -> foo10
foo099 -> foo100
"" -> "1"
Attention: If the number has leading zeros the amount of digits should be considered.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string incrementString(const string &str)
{
    string str2 = str; string s2 =""; string s, s1;
    string num_part =""; string word_part=str;
    if (str.empty()) return "1";
    auto it_ =str2.rbegin();
    if (!isdigit(*it_))  return str2+"1";
      else {
        int k =str2.length();
        for(int i = k-1; i >=0 ; i--)
        {
          s2 = str2[i];
          auto it2_ =s2.rbegin();
          if (isdigit(*it2_)) {
              num_part.insert(num_part.begin(), str2[i]);
              word_part.pop_back();
          }
          else break;
        }
        int llen = num_part.length();
        int dat = stoi(num_part); int dat1 = dat+1;
        s1 = to_string(dat1);
        if (s1.length() >= llen) return word_part + s1;
               else {
                    s = string(llen-s1.length(), '0').append(s1);
                    return word_part + s  ;
               }
      }
}

int main() {
    system("cls");
    cout << "Results" << endl;
    int res;
    vector<string> tes_str = {"foo", "foobar23", "foo0042", "foo9", "foo099",""};
    string key = "testing 123";
    for (auto v:tes_str) {
        cout <<" "<< v  <<" "<< incrementString(v)<< endl;
    }
}

