// https://ya.ru/search/?text=какой+в+с%2B%2B+аналог+списков+в+Python
// https://stackoverflow.com/questions/17528657/python-list-equivalent-in-c
// https://stackoverflow.com/questions/5725693/c-list-get-number-of-elements-in-a-list
// https://cplusplus.com/reference/list/list/list/

#include <iostream>
#include <list>
#include <string>

using namespace std;

main()
{   
    system("cls");
    string s1, s2, s3;
    s1 = "hello world";
    s2 = "HELLO WORLD";
    s3 = "HeLLo WorLd";
    std::list<string> lst_;
    lst_ = {s1,s2,s3}; 
    int n = lst_.size();
    printf("Число элементов списка = %d \n", n);
    for (auto iter = lst_.begin(); iter != lst_.end(); iter++){
        cout << *iter << endl;
    }
    cout << '\n';
}
