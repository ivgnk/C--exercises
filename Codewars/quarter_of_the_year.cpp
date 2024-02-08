/*
Quarter of the year
https://www.codewars.com/kata/5ce9c1000bab0b001134f5af/train/cpp

Given a month as an integer from 1 to 12,
 return to which quarter of the year it belongs as an integer number.
For example: month 2 (February), is part of the first quarter;
 month 6 (June), is part of the second quarter;
 and month 11 (November), is part of the fourth quarter.

Constraint: 1 <= month <= 12
 */

#include <iostream>
using namespace std;

int quarter_of(int month){
    switch (month) {
    case 1 ... 3: return 1;
    case 4 ... 6: return 2;
    case 7 ... 9: return 3;
    case 10 ... 12: return 4;
    }
}



int main() {
    system("cls");
    cout << "Results" << endl;
    int quarter;
    for (int i = 1; i <= 12; i++) {
        quarter = quarter_of(i);
        printf("month = %2d  quarter = %2d\n",i,quarter);
    }
//    int a, b;
//    a = 12; b = 4;
//    int c = int (a / b)+1;
//    int d = a % b; /* Likely uses the result of the division. */
//    printf("c = %d  d = %d\n", c, d);
}