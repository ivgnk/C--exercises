/*
Tribonacci Sequence
https://www.codewars.com/kata/556deca17c58da83c00002db/train/cpp

As the name may already reveal, it works basically like a Fibonacci,
but summing the last 3 (instead of 2) numbers of the sequence to generate the next.
So, if we are to start our Tribonacci sequence with [1, 1, 1] as a starting input
(AKA signature), we have this sequence:
[1, 1 ,1, 3, 5, 9, 17, 31, ...]
Well, you may have guessed it by now, but to be clear:
 you need to create a fibonacci function that given a signature array/list,
 returns the first n elements - signature included of the so seeded sequence.
Signature will always contain 3 numbers; n will always be a non-negative number;
 if n == 0, then return an empty array
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> tribonacci(vector<int> signature, int n)
{
    vector<int> res={};
    int num;
    if (n==0) return res;
    else {
        res.push_back(signature[0]);
        if (n == 1) return res;
        res.push_back(signature[1]);
        if (n == 2) return res;
        res.push_back(signature[2]);
        if (n == 3) return res;
        for (int i = 4; i <= n; i++){
            num = res[i - 2] + res[i - 3] + res[i - 4];
            res.push_back(num);
            printf("i=% d   num=%d\n",i, num);
        }
        return res;
    }
}

// Best of Codewars
//std::vector<int> tribonacci(std::vector<int> signature, int n)
//{
//    signature.resize(n);
//    for (int i=3; i<n; ++i)
//    {
//        signature[i] = signature[i-1]+signature[i-2]+signature[i-3];
//    }
//    return signature;
//}

int main() {
    system("cls");
    vector<int> res;
    vector<int> signature = { 1, 1, 1 };
    res = tribonacci(signature, 10);
    cout << "Results" << endl;
    for (int i=0; i<res.size();i++){
        printf("i=%d  dat=%d\n", i,res[i]);
    }
}
