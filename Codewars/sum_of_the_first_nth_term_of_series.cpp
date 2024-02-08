/*
https://www.codewars.com/kata/555eded1ad94b00403000071/train/cpp
Your task is to write a function which returns the sum of following series upto nth term(parameter).
Series: 1 + 1/4 + 1/7 + 1/10 + 1/13 + 1/16 +...
Rules:
You need to round the answer to 2 decimal places and return it as String.
If the given value is 0 then it should return 0.00
You will only be given Natural Numbers as arguments.
Examples:(Input --> Output)
1 --> 1 --> "1.00"
2 --> 1 + 1/4 --> "1.25"
5 --> 1 + 1/4 + 1/7 + 1/10 + 1/13 --> "1.57"
*/

#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
std::string seriesSum(int n) {
    double sum_ = 0;
    int dat = 1.0;
    int step = 3.0;
    if (n == 0) return "0.00";
    string s;
    for (int i = 1; i <= n; i++) {
        sum_ = sum_ + (1.0 / dat);
        dat = dat + step;
    }
    s = to_string(round(sum_*100)/100.0);
    s = s.substr(0, 4);
    return s;
}

using namespace std;
int main() {
    system("cls");
    int i =10; string s;
//    cout << "Results" << endl;
//    cout << "main i="+ to_string(i) +" "+  seriesSum(i) << endl;
    for (int i=0;i<=60;i++){
        cout << "main i="+ to_string(i) <<endl;
        s = seriesSum(i);
        cout << "    "+s << endl;
    }
}