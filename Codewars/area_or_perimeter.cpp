/*
Area or Perimeter
https://www.codewars.com/kata/5ab6538b379d20ad880000ab/train/cpp
You are given the length and width of a 4-sided polygon.
The polygon can either be a rectangle or a square.
If it is a square, return its area.
If it is a rectangle, return its perimeter. */
#include "iostream"
#include <string>
#include <vector>
#include <numeric>



using namespace std;
int area_or_perimeter(int l , int w) {
    return l==w ? l*l: 2*(l+w);
}

int main() {
    system("cls");
    cout << "Results" << endl;
}