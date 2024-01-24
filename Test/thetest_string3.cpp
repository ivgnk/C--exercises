// What's the difference between cstdlib and stdlib.h?
// https://stackoverflow.com/questions/2900785/whats-the-difference-between-cstdlib-and-stdlib-h

using namespace std;
#include <cstdlib>
#include <string>
#include <iostream>

main() {
    system("cls");
    string s;
    string str_ = "15";// countSheep(5);
    string str_2 {"13"};
    string str_3 =std::to_string(6);
    s = str_+" "+str_2+" "+str_3;
    // std::string(12);
    // str_.append(str_2); 
    cout << str_<< endl;
    cout << str_2<< endl;
    cout << str_3<< endl;
    cout << s<< endl;
    // printf("%s \n",str_);
}