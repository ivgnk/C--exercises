/*
https://www.codewars.com/kata/563cf89eb4747c5fb100001b/train/cpp
Задача: Дан массив целых чисел, удалить наименьшее значение. Не изменяйте исходный массив.
Если есть несколько элементов с одинаковым значением, удалите элемент с меньшим индексом.
Если вы получили пустой массив/список, верните пустой массив/список.

Не меняйте порядок оставшихся элементов.
* Input: [1,2,3,4,5], output = [2,3,4,5]
* Input: [5,3,2,1,4], output = [5,3,2,4]
* Input: [2,2,1,2,1], output = [2,2,2,1]
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using t1 = vector<unsigned int>;
t1 removeSmallest(const t1& numbers) {
    if (numbers.empty()) return numbers;
    int n = numbers.size();
//    printf("numbers.size() = %d\n", n);
    auto min_value = *std::min_element(numbers.begin(),numbers.end());
//    printf("min_value = %d\n", min_value);

    t1 numbers2; bool first = true;
    for (int i=0;i<n;i++){
        if ((numbers[i]==min_value) && (first == true))
            {first = false;}
        else {
            numbers2.push_back(numbers[i]);
        }
    }
//    printf("numbers2\n");
//    for (auto v: numbers2){
//        cout << v << endl;
//    }
    return numbers2;
}

int main() {
    system("cls");
    cout << "Results" << endl;
    std::vector<unsigned int> n;
    // n  = { 1, 2, 3, 4, 5 };
    n = { 2, 2, 1, 2, 1 };
    auto b = removeSmallest(n);

}
