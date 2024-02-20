/*
https://www.codewars.com/kata/55e2adece53b4cdcb900006c/train/cpp
 given two speeds v1 (A's speed, integer > 0) and
 v2 (B's speed, integer > 0) and
 a lead g (integer > 0) how long will it take B to catch A?
The result will be an array [hour, min, sec] which
 is the time needed in hours, minutes and seconds
 (round down to the nearest second) or a string in some languages.
If v1 >= v2 then return nil
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Tortoise
{
public:
    //----- bad
    static vector<int> race(int v1, int v2, int g)
    {
        vector<int> no_ = {-1, -1, -1};
        if (v1 >= v2) return no_;
        //  v2*t+g = v1*t  => (v2-v1)*t = g => t = g/(v2-v1)
        double time = double(g)/(double(v2-v1));
        // https://stackoverflow.com/questions/1903846/c-convert-decimal-hours-into-hours-minutes-and-seconds
        printf("%f \n", time);
        int hours = time; // double to integer conversion chops off decimal
        int minutes = (time - double(hours)) * double(60);
//        int seconds = int(round(((time - double(hours)) * 60) - double(minutes) * 60));
//         int seconds = (((time - hours) * 60) - minutes) * 60;
        int seconds = int(ceil((((time - hours) * 60) - minutes) * 60));
        return vector<int>{hours, minutes, seconds};
    }
};

int main() {
    system("cls");
    vector<int> dat, res;
    cout << "Results" << endl;
    dat = {720, 850, 70};
    res = Tortoise::race(720, 850, 70);
    cout << res[0] <<" "<< res[1] <<" "<< res[2] << endl;
//    dotest(820, 81, 550, {-1, -1, -1});
//    dotest(80, 91, 37, {3, 21, 49});
}