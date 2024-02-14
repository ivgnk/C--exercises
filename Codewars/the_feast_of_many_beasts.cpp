/*
 The Feast of Many Beasts - 8 kyu
 https://www.codewars.com/kata/5aa736a455f906981800360d/train/cpp
У всех животных праздник! Каждое животное приносит одно блюдо.
 Есть только одно правило: блюдо должно начинаться и заканчиваться
 теми же буквами, что и название животного.
 Например, "great blue heron" приносит "garlic naan".
 Напишите функцию пиршество, которая принимает имя животного и блюдо
 в качестве аргументов и возвращает true или false, чтобы указать,
 разрешено ли зверю принести блюдо на пир.
 Предположим, что зверь и блюдо всегда представляют собой строки в
 нижнем регистре и каждая из них состоит как минимум из двух букв.
 Зверь и блюдо могут содержать дефисы и пробелы, но они не появятся
 в начале или конце строки. Они не будут содержать цифр.
 */


#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool feast(string beast, string dish){
    int nbeast = beast.size();
    int ndish = dish.size();
    if ((beast[0]==dish[0])&&(beast[beast.size()-1]==dish[dish.size()-1])) return true;
        else return false;
}

int main() {
    system("cls");
    cout << "Results" << endl;
    cout << feast("great blue heron", "garlic naan") << endl;
    string s;
}
