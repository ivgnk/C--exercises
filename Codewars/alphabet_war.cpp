/*
Alphabet war
https://www.codewars.com/kata/59377c53e66267c8f6000027/train/cpp
Write a function that accepts <fight> string consists of only small letters
 and return who wins the fight. When the left side wins return Left side wins!,
 when the right side wins return Right side wins!, in other case return Let's fight again!.
 The left side letters and their power:
 w - 4
 p - 3
 b - 2
 s - 1
The right side letters and their power:
 m - 4
 q - 3
 d - 2
 z - 1
The other letters don't have power and are only victims.
Example
AlphabetWar("z");        //=> Right side wins!
AlphabetWar("zdqmwpbs"); //=> Let's fight again!
AlphabetWar("zzzzs");    //=> Right side wins!
AlphabetWar("wwwwwwz");  //=> Left side wins!
 */

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

string alphabetWar(string fight)
{
    int sum_left =0;
    int sum_right = 0;
    for (auto v: fight){
        switch (v) {
            case 'w': sum_left +=4; break;
            case 'p': sum_left +=3; break;
            case 'b': sum_left +=2; break;
            case 's': sum_left +=1; break;

            case 'm': sum_right =sum_right + 4; break;
            case 'q': sum_right =sum_right + 3; break;
            case 'd': sum_right =sum_right + 2; break;
            case 'z': sum_right =sum_right + 1; break;
        } //-- switch
    } //-- for
    printf("s = %s  sum_left = %d       sum_right = %d \n",fight.c_str(),sum_left, sum_right);
    if (sum_left==sum_right) return "Let's fight again!";
        else if (sum_left>sum_right) return "Left side wins!";
              else return "Right side wins!";
}

// Codewars best choice

int main() {
    system("cls");
    cout << "Results" << endl;
    cout << alphabetWar("z") << endl;
    cout << alphabetWar("zdqmwpbs") << endl;
    cout << alphabetWar("zzzzs") << endl;
    cout << alphabetWar("wwwwww") << endl;
    }
