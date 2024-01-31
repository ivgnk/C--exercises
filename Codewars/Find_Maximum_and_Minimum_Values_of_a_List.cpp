/*
https://www.codewars.com/kata/577a98a6ae28071780000989/train/cpp
*/

#include <cstdio>
#include <cstdlib>
#include <iostream>
// #include <string>
#include <vector>
#include <algorithm>

using namespace std;

int min(vector<int> lst){
    int min_ = *min_element(lst.begin(), lst.end()); // #include <algorithm>
    return min_;
}

int max(vector<int> lst){
    int max_ = *max_element(lst.begin(), lst.end()); // #include <algorithm>
    return max_;
}

main() {
    // https://ru.stackoverflow.com/questions/595233/Инициализация-вектора-через-фигурные-скобки
    vector<int> lst{4,6,2,1,9,63,-134,566};
    // https://stackoverflow.com/questions/10750057/how-do-i-print-out-the-contents-of-a-vector
    
    // cout << "\n-with auto-\n" << endl;
    // for (auto the_int: lst)
    //     cout << to_string(the_int) << endl;
    // printf("\n-Done-\n");
    int max_ = max(lst); int min_ = min(lst);
    printf("max = %d, min = %d\n", max_, min_);
 }
