/*
Is he gonna survive?
https://www.codewars.com/kata/59ca8246d751df55cc00014c/train/cpp
A hero is on his way to the castle to complete his mission.
However, he's been told that the castle is surrounded with a couple of powerful dragons!
each dragon takes 2 bullets to be defeated, our hero has no idea how many bullets he should carry..
Assuming he's gonna grab a specific given number of bullets and
move forward to fight another specific given number of dragons, will he survive?

Return true if yes, false otherwise :)
 */
#include "iostream"
#include <string>
#include <vector>
#include <numeric>

bool hero(int bullets, int dragons) {
    if (bullets>=dragons*2) return true;
        else return false;
}

struct hr {
    int bullets;
    int dragons;
};

using namespace std;
vector<hr> the_hr ={ {10,5}, {7,4}, {4,5}, {100,40},
               {1500, 751}, {0,1}};

int main() {
    system("cls");
    cout << "Results" << endl;
    // cout << the_hr.size() << endl;
    int bullets; int dragons;
    for (int i=0;i<the_hr.size();i++)
    {
        bullets = the_hr[i].bullets;
        dragons = the_hr[i].dragons;
        printf("%d bullets = %d , dragons = % d , hero = %d\n",i, bullets, dragons, hero(bullets, dragons));
    }
}