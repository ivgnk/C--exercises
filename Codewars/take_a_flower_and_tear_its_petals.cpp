/*
https://www.codewars.com/kata/57f24e6a18e9fad8eb000296/train/cpp
Who remembers back to their time in the schoolyard, when girls would take a flower and tear its petals,
saying each of the following phrases each time a petal was torn:

"I love you"
"a little"
"a lot"
"passionately"
"madly"
"not at all"
If there are more than 6 petals, you start over with "I love you" for 7 petals, "a little" for 8 petals and so on.

When the last petal was torn there were cries of excitement, dreams, surging thoughts and emotions.
Your goal in this kata is to determine which phrase the girls would say at the last petal for a
flower of a given number of petals. The number of petals is always greater than 0.
*/

#include "iostream"
#include "string"
using namespace std;

const string s[] = {"I love you", "a little", "a lot", "passionately", "madly", "not at all"};

string how_much_i_love_you(int nb_petals) {
    int n = nb_petals-1;
    n =  (n>5) ? n % 6 : n;
    //n = (nb_petals % 7)-1;
    return s[n];
}



int main() {
    string  s2;
    system("cls");
    cout << "Results" << endl;
    for (int i=1; i<=26; i++){
        s2 = how_much_i_love_you(i);
        printf("i=%2d   i%6=%2d  %s \n",i,i%6,s2.c_str());
    }

}