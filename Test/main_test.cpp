#include <iostream>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

void test_string(){
    string str = "simple";    string s2 = "";
    printf("str len = %d\n",str.size());
    printf("str len = %d\n",str.length());
    printf("str len = %d\n",str.empty());
    printf("str len = %d\n",s2.empty());

    printf("--- Проверка повторения \n");
    string s = "lbabal";
    printf("before s = %s\n",s.c_str());
    // https://stackoverflow.com/questions/11310898/how-do-i-get-the-type-of-a-variable
//    cout << "typeid(var).name()" << endl;
//    cout << typeid(s.begin()).name() << endl;
//    cout << typeid(s.end()).name() << endl;

    printf("after\n");
    std::sort(s.begin(), s.end());
    printf("after sort = %s\n",s.c_str());
    bool uniq = std::unique(s.begin(), s.end()) == s.end();
    cout << "uniq ="+ to_string(uniq) << endl;
    cout << s << endl;
    // printf("after s = %s\n",s.c_str());

}

void test_cycles(){
  // https://kaidzu.com/cpp/goto
  // https://stackoverflow.com/questions/1257744/can-i-use-break-to-exit-multiple-nested-for-loops
  int in = 3;
  int jn = 3;
  for (int i=0; i<=in; i++){
      for (int j=0; j<=jn; j++) {
          if ((i==1) && (j==1)) { printf("goto\n"); goto lab;}
          if ((i==2) && (j==2)) { printf("break\n\n"); break;} // прерывает только вложенный цикл, испольуй goto
                else {printf("i=%d  j=%d  i+j=%d\n",i,j,i+j);}
          lab:
          if (j==jn) printf("\n");
      }
  }
}

int test_return() {
    printf("before return");
    return 1;
    printf("after return");
    return 0;
}

void test_bool() {
    bool b0 = true;
    bool b1 = false;
    cout << b0 << endl;
    cout << b1 << endl;
    printf("---\n");
    string s0 = to_string(b0);
    string s1 = to_string(b1);
    cout << s0+" - " << typeid(s0).name() << endl;
    cout << s1+" - " << typeid(s1).name()<< endl;
}

#include <string.h>
void test_strtok(){
    // system("cls");
    char str[] = "Это не баг, это фича.";
    printf("Разделение строки = \"%s\" = на лексемы.", str);
    char *pch = strtok(str, " ,."); //во втором параметре указаны разделители (пробел, запятая, точка)
    printf("\nЛексемы:");
    while (pch != NULL) //пока есть лексемы
    {
        printf("\n%s", pch);
        pch = strtok(NULL, " ,.");
    }
}

int main() {
   test_string();
//    test_cycles();
  // test_return();
//  test_bool();
    test_strtok();
}
