/*
https://www.codewars.com/kata/5a6663e9fd56cb5ab800008b/train/cpp
I have a cat and a dog.
I got them at the same time as kitten/puppy. That was humanYears years ago.
Return their respective ages now as [humanYears,catYears,dogYears]
NOTES:
humanYears >= 1
humanYears are whole numbers only
Cat Years
15 cat years for first year
+9 cat years for second year
+4 cat years for each year after that
Dog Years
15 dog years for first year
+9 dog years for second year
+5 dog years for each year after that
*/

#include <string>
#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;
using V = std::vector<int>;

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
    vector<int> v ={humanYears};
    int CatYears=0;
    int DogYears=0;
    if (humanYears>=1)
    {
        CatYears+=15; DogYears+=15;
        if (humanYears>=2) {
            CatYears+=9; DogYears+=9;
            if (humanYears>2) {
                int delta = humanYears-2;
                CatYears+=delta*4;
                DogYears+=delta*5;
            }
        }
    }
    v.push_back(CatYears);
    v.push_back(DogYears);
    return v;
}

int main() {
    system("cls");
    cout << "Results" << endl;
    auto res = humanYearsCatYearsDogYears( 10);
    // cout << res[0] << res[1] << res[2] << endl;
    printf("%d   %d   %d  ", res[0],res[1],res[2]);
}