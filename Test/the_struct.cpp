/*
https://stackoverflow.com/questions/6810656/creating-an-array-of-structs-in-c
*/
#include <string>
#include <iostream>
#include <windows.h>
using namespace std;
struct Customer {
    int uid;
    string name;
  };

main() {
  int pause, n;
  n = 2;
  Customer customerRecords[n];
  customerRecords[0] = {25, "Bob Jones"};
  customerRecords[1] = {26, "Jim Smith"};
  for (int i=0;i<n;i++) {
    printf("id = %d, name = %s \n", customerRecords[i].uid, customerRecords[i].name.c_str());
  }
  Sleep(6000);  
  return 0;
}
  


