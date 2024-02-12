/*
https://www.codewars.com/kata/57eb8fcdf670e99d9b000272/train/cpp
Given a string of words, you need to find the highest scoring word.
Each letter of a word scores points according to its position in the alphabet: a = 1, b = 2, c = 3 etc.
For example, the score of abad is 8 (1 + 2 + 1 + 4).
You need to return the highest scoring word as a string.
If two words score the same, return the word that appears earliest in the original string.
All letters will be lowercase and all inputs will be valid.
 */


#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#include <string>
using namespace std;
std::string highestScoringWord(const std::string &str)
{
    int i=0;
    vector<string> strng_arr={};
    // vector<int> score_arr={};
    istringstream ss(str);
    string word;
    int index=0;
    int max_value=0;
    int max_ind =0;
    while (ss >> word){
        strng_arr.push_back(word);
        int sum_=0;
        // https://www.learncpp.com/cpp-tutorial/chars/
        for (auto v:word){
            sum_+= int(v-96);
        }
        if (sum_>max_value){
            max_value=sum_; max_ind=index;
        };
        index++;
    }
    return strng_arr[max_ind];
}

int main() {
    vector<string> s = {"man i need a taxi up to ubud", "what time are we climbing up the volcano", "take me to semynak",
                        "massage yes massage yes massage", "take two bintang and a dance please", "aa b"};
    system("cls");
    cout << "Results fake_binary.cpp" << endl;
    // https://www.geeksforgeeks.org/split-a-sentence-into-words-in-cpp/
    // Method 3 (Using stringstream)
    // istringstream ss(s[0]);
    // string word;
    // while (ss >> word)
    //      cout << word << endl;

    for (auto v:s){
        cout << highestScoringWord(v) << endl;
    }
}
