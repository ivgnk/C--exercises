#include <iostream>
#include <math.h> // https://ru.wikipedia.org/wiki/Math.h
using namespace std;

int main(int argc, char** argv) {
    system("cls");
    int age=13;
    cout << "Thanks for reading my code!\n";
	for (int i = 0; i <= age;i++)
    {
        // cout << i ;
        // cout << '\n';
        printf("i = %2d             i*i= %5.1f\n", i,pow(i,2)); // https://codelessons.dev/ru/printf-in-c-cplusplus
    }
}