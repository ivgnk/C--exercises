/*
Who likes it?
https://www.codewars.com/kata/5266876b8f4bf2da9b000362/train/cpp
Implement the function which takes an array containing the names of people that like an item. It must return the display text as shown in the examples:

[]                                -->  "no one likes this"
["Peter"]                         -->  "Peter likes this"
["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"
 */


#include <string>
#include <iostream>
#include <vector>

using namespace std;

std::string likes(const std::vector<std::string> &names)
{
    int n = names.size();
    string ld  = " like this";
    string lds = " likes this";
    string ad_ = " and ";
    switch(n){
        case 0: return "no one likes this";
        case 1: return names[0]+lds;
        case 2: return names[0]+ad_+ names[1]+ld;
        case 3: return names[0]+", "+names[1]+ad_+names[2]+ld;
        default: return names[0]+", "+names[1]+ad_+ to_string(n-2)+" others"+ld;
    }
}
int main() {
    system("cls");
    cout << "Results" << endl;
}