#include <string>
#include <iostream>
using namespace std;

int main() {
    system("cls");
    string s = "12345";
    string s2;
    for (int i=0; i<s.size(); i++){
        s2 = s.substr(i,1);
        printf("subs i=%i  s=%s\n",i,s2.c_str());
    }
}
