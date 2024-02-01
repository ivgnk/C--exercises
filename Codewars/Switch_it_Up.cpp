/*
number between 0-9, return it in words: Input :: 1б  -> Output :: "One".
https://www.codewars.com/kata/5808dcb8f0ed42ae34000031/train/cpp
*/

#include <string>
#include <iostream>


using namespace std;
string switch_it_up(int number){
  // https://www.bestprog.net/ru/2019/12/23/c-arrays-of-strings-of-type-string-examples-ru/
  // int num_num = 10;  
  string numbers_[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
  return numbers_[number];  
}

main(){
    for (int i=0;i<10;i++){
        // https://stackoverflow.com/questions/10865957/printf-with-stdstring
        // printf("%2d = %s \n", i, switch_it_up(i).c_str()); // 1var
        cout << to_string(i)+" = "+switch_it_up(i) << endl; // 2var 
            }

}