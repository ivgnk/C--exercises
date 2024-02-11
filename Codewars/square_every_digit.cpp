/*
https://www.codewars.com/kata/546e2562b03326a88e000020/train/cpp
 to square every digit of a number and concatenate them
 if we run 9119 through the function,
 811181 will come out, because 92 is 81 and 12 is 1. (81-1-1-81)
 An input of 765 will/should return 493625 because 72 is 49, 62 is 36, and 52 is 25. (49-36-25)
 The function accepts an integer and returns an integer.
*/

#include <iostream>
#include <vector>
using namespace std;

int square_digits(int num) {
    string s= to_string(num);
    auto n=s.size();
    int curr_int;
    string res_s="";
    for (int i=0; i<n;i++)
    {
        curr_int = stoi(s.substr(i,1));
        res_s = res_s+ to_string(curr_int*curr_int);
    }
    return stoi(res_s);
}

int main() {
    system("cls");
    cout << "Results" << endl;
    printf("square_every_digit.cpp\n");
    int res;
    vector<int> ini_dat = {3212, 2112, 0, 13579, 24680};
    auto n=ini_dat.size();
    for (int i=0; i<n;i++)
        {
            res = square_digits(ini_dat[i]);
            printf("i=%d   ini=%7d   res=%7d\n",i, ini_dat[i],res);
        }
}

