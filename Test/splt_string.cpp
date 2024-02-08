/*
https://www.cyberforum.ru/cpp-beginners/thread98315.html
*/
#include <iostream>
#include <list>
#include <algorithm>
#include <functional>
#include <iterator>
#include <string>
#include <sstream>

int main(){
    std::string buf("raz dva tri");
    std::list<std::string> words;
    std::istringstream ist(buf);
    std::string tmp;
    while ( ist >> tmp )
        words.push_back(tmp);

    std::cout << "Unsorted:" << std::endl;
    std::copy(words.begin(), words.end(), std::ostream_iterator<std::string>(std::cout, "\n"));

//    words.sort();
//    std::cout << "Sorted ascendant:" << std::endl;
//    std::copy(words.begin(), words.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
//
//    words.sort(std::greater<std::string>());
//    std::cout << "Sorted descendant:" << std::endl;
//    std::copy(words.begin(), words.end(), std::ostream_iterator<std::string>(std::cout, "\n"));

    return 0;
}
