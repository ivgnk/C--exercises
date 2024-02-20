/*
Anagram Detection
 https://www.codewars.com/kata/529eef7a9194e0cbc1000255/train/cpp
 An anagram is the result of rearranging the letters of a word to produce a new word (see wikipedia).
 Note: anagrams are case insensitive
 Complete the function to return true if the two arguments given are anagrams of each other; return false otherwise.
 "foefet" is an anagram of "toffee"
 "Buckethead" is an anagram of "DeathCubeK"
 */

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

bool isAnagram(string te_, string or_){
    set<string> tes = {};    set<string> ors = {};
    char vv; string s;
    if (te_.size() != or_.size()) return false;
    transform(or_.begin(), or_.end(), or_.begin(), ::tolower); // #include <algorithm>
    transform(te_.begin(), te_.end(), te_.begin(), ::tolower); // #include <algorithm>
    for (auto v:te_){
        s = string(1,v);   tes.insert(s);
    }
    for (auto v:or_){
        s = string(1,v);   ors.insert(s);
    }
    // for (auto t:tes) std::cout << t << " ";
    return tes == ors;
}

// Codewars best choice
//bool isAnagram(std::string test, std::string original){
//    for(auto &i: test) if(isupper(i)) i = tolower(i);
//    for(auto &i: original) if(isupper(i)) i = tolower(i);
//    sort(test.begin(), test.end());
//    sort(original.begin(), original.end());
//    return test == original;
//}

int main() {
    system("cls");
    cout << "Results" << endl;
    isAnagram("foefet", "toffee");
    }
