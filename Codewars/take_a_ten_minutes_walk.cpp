/*
https://www.codewars.com/kata/54da539698b8a2ad76000228/train/cpp
Take a Ten Minutes Walk
Вы живете в городе Картезия, где все дороги расположены идеальной сеткой.
Вы пришли на встречу на десять минут раньше и решили воспользоваться возможностью прогуляться.
Город предоставляет своим гражданам приложение для создания ходьбы на их телефонах — каждый раз,
когда вы нажимаете кнопку, оно отправляет вам массив однобуквенных строк, представляющих направления для ходьбы
(например, ['n', 's', 'w', 'е']). Вы всегда проходите только один квартал для каждой буквы (направления),
и вы знаете, что прохождение одного городского квартала занимает у вас одну минуту, поэтому создайте функцию,
которая будет возвращать true, если прогулка, которую предлагает вам приложение, займет у вас ровно десять минут
(вы не хочу ни рано, ни поздно!) и, конечно же, вернет вас в исходную точку. В противном случае верните false.
Примечание. Вы всегда получите действительный массив, содержащий случайный набор букв
направления (только «n», «s», «e» или «w»).
Он никогда не выдаст вам пустой массив (это не прогулка, это стояние на месте!).
*/


#include <string>
#include <iostream>
#include <algorithm>
#include <algorithm>
#include<vector>


using namespace std;

bool isValidWalk(std::vector<char> walk) {
    int n = walk.size();
    if (n !=10) return false;
    int no_n = std::count(walk.begin(), walk.end(), 'n');
    int no_s = std::count(walk.begin(), walk.end(), 's');
    int no_w = std::count(walk.begin(), walk.end(), 'w');
    int no_e = std::count(walk.begin(), walk.end(), 'e');
    // if ((no_n == 0)||(no_s == 0)||(no_w == 0)||(no_e == 0)) return false;
    if ((no_n==no_s)&&(no_w==no_e)) return true;
    else return false;
}

using V = std::vector<char>;

int main() {
    system("cls");
    cout << "Results" << endl;
    cout << isValidWalk(V{'n'}) << endl;
    cout << isValidWalk(V{'n','s','n','s','n','s','n','s','n','s'}
    ) << endl;
}