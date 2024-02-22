#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        string s = to_string(x);
        int n = s.size();
        int n2 = n/2  ;
        bool res=true;
        // printf("letters,  n = %d\n",n);
        for (int i=0;i<n2;i++){
            res = res && (s[i]==s[n-1-i]);
            // cout <<"num1="<< i <<"  s1="<< s[i] << "       num2="<< n-1-i<< "  s2="<< s[n-1-i]  << endl;
        }
        return res;
    }
};

int main() {
    system("cls");
    cout << "Results" << endl;
    bool res;
    vector<int> srs_test = {121,- 121, 10};
    auto res1 = new Solution;
    for (auto i:srs_test) {
        printf("\nnum %d\n",i);
        res = res1->isPalindrome(i);
        cout << "Result =  "<< res << endl;
    }
}