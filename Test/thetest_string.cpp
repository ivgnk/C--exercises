/*
 https://codelessons.dev/ru/string-in-cplusplus/
*/

#include <iostream>
using namespace std;

int main() {
    string greeting = "Привет"; // инициализация строки
    string world("Мир");        // явный вызов конструктора
    string exclamation{'!'};    // инициализация как массива символов

    cout << greeting << " " << world << exclamation << endl;

    return 0;
}