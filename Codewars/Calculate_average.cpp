/*
https://www.codewars.com/kata/57a2013acf1fa5bfc4000921/train/cpp
*/
#include <vector>
#include <numeric>
#include <cstdio>
using namespace std;

double calcAverage(const std::vector<int>& lst){
    int num_el = lst.size();
    double sum_ = 0.0; 
    for (int i=0;i<num_el;i++) sum_ = sum_ + lst[i];
    return sum_/num_el;
}

double calcAverage2(const std::vector<int>& lst){   
    // https://www.techiedelight.com/ru/find-average-of-all-values-present-in-a-vector-in-cpp/
    return std::accumulate(lst.begin(), lst.end(), 0.0) / lst.size();
    }

double calcAverage3(const std::vector<int>& lst){   
    // https://www.techiedelight.com/ru/find-average-of-all-values-present-in-a-vector-in-cpp/
    double sum = 0.0;
    for (auto dat: lst) {
        sum += double(dat);
    }
    return sum / lst.size();
    }


main() {
    vector<int> lst{4,6,2,1,9,63,-134,566};
    double avg = calcAverage3(lst);       
    printf("average3  = %f \n", avg);   
}