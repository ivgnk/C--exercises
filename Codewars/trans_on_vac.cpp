/*
Transportation on vacation

https://www.codewars.com/kata/568d0dd208ee69389d000016/train/cpp
Every day you rent the car costs $40.
If you rent the car for 7 or more days, you get $50 off your total.
Alternatively, if you rent the car for 3 or more days, you get $20 off your total.
*/

#include <iostream>
using namespace std;
int rental_car_cost(int days){
    int cost = 40;  int summ = days*cost;
    if (days<3) return summ;
        else if ((days>=3) && (days<7)) return summ-20;
            else return summ-50;
}

int main() {
    system("cls");
    cout << "Results" << endl;
}
