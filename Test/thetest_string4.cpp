#include <string>
#include <iostream>
using namespace std;

main(){
    system("cls");
    // string str_ ="1! 2w Ц] ";
    // string str_ ="12345678";
    string str_ = "12345678cdABCD+-[]";
    int n = str_.length();
    printf("n = %d \n",n);
    for (int i=0; i<n; i++){
        cout << str_[i] << endl;

    }    
}