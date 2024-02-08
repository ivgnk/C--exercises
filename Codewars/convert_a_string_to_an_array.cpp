/*
Convert a string to an array
Examples (Input ==> Output):
"Robin Singh" ==> ["Robin", "Singh"]

"I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]
*/

#include <list>
#include <vector>
// #include <string>
#include <cstring>
// #include <string.h>
#include <iostream>
#include <sstream>

using namespace std;

std::vector<std::string> string_to_array(const std::string s) {
    std::vector<std::string> words;
    if (s.empty()) {
        words.push_back("");
        return words;
    }
    std::istringstream ist(s);
    std::string tmp;
    while ( ist >> tmp ) {
        words.push_back(tmp);
    }
    return words;
}

int main() {
    system("cls");
    cout << "Results" << endl;
    string s = "aa bb cc";
    auto s2= string_to_array(s);
    for (auto v:s2){
        cout << v <<endl;
    }

}
