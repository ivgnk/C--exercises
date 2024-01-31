/*
Your code will determine if the number passed is even (or not).
The function needs to return either a true or false.
Numbers may be positive or negative, integers or floats.
Floats with decimal part non equal to zero are considered UNeven for this kata.
*/

// Ошибки в проверке

#include <cstdio>
#include <cmath>

using namespace std;

bool is_even_full(double dat)
{
    double intPart, fractPart;
    int intParti;
    fractPart = modf(dat, &intPart);
    intParti = int(intPart);
    printf("         dat = %9.2f   fractPart = %9.2f  intPart= %9.2f intParti= %d\n", dat, fractPart, intPart, intParti);
    if (fractPart <1e-12){
        int dd = intParti % 2;  // остаток от деления
        bool res= (dd==0);
        printf("остаток от деления %d, значение bool = %d\n",dd, res);
        return res;}
    else {printf("не нулевая дробная часть\n");
        return false;}
}

bool is_even(double dat)
{
    double intPart, fractPart;
    long intParti;
    fractPart = modf(dat, &intPart);
    intParti = long(intPart);
    if (fractPart <1e-12){
        long dd = intParti % 2;  // остаток от деления
        bool res= (dd==0);
        return res;}
    else return false;
}


main(){
    // https://calmsen.ru/funkcziya-modf/
    printf("Is even function\n");
    // printf("del = %d \n",13 % 2);
    double x = 14.86;
    printf("1 dat = %9.2f  even= %d\n\n", x, is_even(x));
    x = 14.00;
    printf("2 dat = %9.2f  even= %d \n\n", x, is_even(x));
    x = 13.86;
    printf("3 dat = %9.2f  even= %d \n\n", x, is_even(x));
    x = 13.00;
    printf("4 dat = %9.2f  even= %d \n\n", x, is_even(x));
    x = -14.00;
    printf("5 dat = %9.2f  even= %d \n\n", x, is_even(x));

}