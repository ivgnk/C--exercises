/*
Sum of two lowest positive integers
https://www.codewars.com/kata/558fc85d8fd1938afb000014/train/cpp
 
Create a function that returns the sum of the two lowest positive numbers 
given an array of minimum 4 positive integers. No floats or non-positive integers will be passed.
For example, when an array is passed like 
[19, 5, 42, 2, 77], the output should be 7.
[10, 343445353, 3453445, 3453545353453] should return 3453455.
*/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long sumTwoSmallestNumbers(vector<long long> numbers) {
    // https://www.geeksforgeeks.org/sort-c-stl/
    sort(numbers.begin(), numbers.end());
    return long(numbers[0]+numbers[1]);
}

int main() {

    long long a0[] = {19, 5, 42, 2, 77};
    long long a1[] = {10, 343445353, 3453445, 3453545353453};
    long sum_;
    vector<long long> numbers0 = {19, 5, 42, 2, 77};
    vector<long long> numbers1 = {10, 343445353, 3453445, 3453545353453};

    system("cls");
    cout << "Results" << endl;
    sum_ = sumTwoSmallestNumbers(numbers0);    printf("sum 1 = %ld\n", sum_);
    sum_ = sumTwoSmallestNumbers(numbers1);    printf("sum 1 = %ld\n", sum_);
}
