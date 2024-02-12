/*
Thinkful - Logic Drills: Traffic light
https://www.codewars.com/kata/58649884a1659ed6cb000072/train/cpp
You're writing code to control your town's traffic lights. You need a function to handle each change from green, to yellow, to red, and then to green again.

Complete the function that takes a string as an argument representing the current state of the light and returns a string representing the state the light should change to.

For example, when the input is green, output should be yellow.
 */
#include "iostream"
#include <string>
#include <vector>
#include <numeric>



using namespace std;
std::string update_light(std::string current) {
    if (current=="green") return "yellow";
    if (current=="yellow") return "red";
    if (current=="red") return "green";
}


int main() {
    system("cls");
    cout << "Results" << endl;
}