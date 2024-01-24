/*
Given a non-negative integer, 3 for example, return a string with a murmur: 
"1 sheep...2 sheep...3 sheep...". 
Input will always be valid, i.e. no negative integers.
*/

#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

std::string countSheep(int number) {
    std::string str_, shp_str, num_str;
    shp_str = " sheep...";
    str_ = "";
    for (int i=1; i<=number; i++)
       str_ = str_+std::to_string(i)+shp_str;
  return str_;  
}

main() {
    system("cls");
    string str_ =  countSheep(5);
    cout << str_<< endl;
}