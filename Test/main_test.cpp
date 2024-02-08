#include <iostream>
#include <string>
using namespace std;

void test_string(){
    string str = "simple";    string s2 = "";
    printf("str len = %d\n",str.size());
    printf("str len = %d\n",str.length());
    printf("str len = %d\n",str.empty());
    printf("str len = %d\n",s2.empty());
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
}

int main() {
  //  test_string();
  //  test_cycles();
  // test_return();
  test_bool();
}
