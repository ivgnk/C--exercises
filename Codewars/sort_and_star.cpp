/*
Sort and Star
https://www.codewars.com/kata/57cfdf34902f6ba3d300001e/train/cpp

You will be given a list of strings. You must sort it alphabetically
 (case-sensitive, and based on the ASCII values of the chars) and then return the first value.
The returned value must be a string, and have "***" between each of its letters.
You should not remove or add elements from/to the array.
*/


#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;
string twoSort(vector<string> s)
{
    string sn = "";
    sort(s.begin(),s.end());
    auto currs = s[0];
    int n = currs.size();
    for (int i=0;i<=(n-2);i++) {
        cout << to_string(i)+" "<< currs[i] << endl;
        sn = sn + currs[i] + "***";
    }
    return sn+currs[n-1];
}

int main() {
    vector<string> ss = { "bitcoin", "take", "over", "the", "world", "maybe", "who", "knows", "perhaps" };
    system("cls");
    auto s = twoSort(ss);
    cout << "Results" << endl;
    cout << s << endl;
}
