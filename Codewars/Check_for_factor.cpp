/*
https://www.codewars.com/kata/55cbc3586671f6aa070000fb/train/cpp
*/
#include <cstdio>
#include <cstdlib>

/**
 * Check if the given factor is a factor of the base number.
 * @param base the base number
 * @param factor the factor to check
 * @return true if the factor is a factor of the base number, false otherwise
 * @throws None
 */
bool checkForFactor(int base, int factor) {
    int reslt = base % factor;  // остаток от деления
    if (reslt == 0) {
        return true;
    } else return false;
}
main()
{
   system("cls");     
   bool res_test = true;
   printf("output true as %d\n", res_test);
   bool reslt = checkForFactor(10, 2); printf("%d\n", bool(reslt));
   reslt = checkForFactor(10, 3); printf("%d\n", reslt);
   reslt = checkForFactor(10, 4); printf("%d\n", reslt);
}
