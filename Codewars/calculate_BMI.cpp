/*
https://www.codewars.com/kata/57a429e253ba3381850000fb/train/cpp
Write function bmi that calculates body mass index (bmi = weight / height2).
if bmi <= 18.5 return "Underweight"
if bmi <= 25.0 return "Normal"
if bmi <= 30.0 return "Overweight"
if bmi > 30 return "Obese"
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#include <string>

std::string bmi(double w, double h)
{
    double ind = w/ (h*h);
    if (ind <= 18.5) return "Underweight";
        else if (ind <= 25.0) return "Normal";
            else if (ind <= 30.0) return "Overweight";
                else return "Obese";
}

int main() {
    vector<double> weight = {81.585,  90.25, 85, 200};
    vector<double> height = {2.1,  1.9, 1.7, 1.6};
    system("cls");
    printf("bmi\n");
    int n = weight.size();
    for (int i=0;i<n;i++){
        cout << to_string(i)+"  w= "+to_string(weight[i])+"h= "+to_string(height[i]) << endl;
        cout << "    "+bmi(weight[i], height[i]) << endl;
    }
}