#include <iostream> 
#include <string> 
#include <windows.h>
using namespace std; 
  
// Driver Code 
int main() 
{ 
    int i; 
    int tm = 6000;
    string s;
    // Take input using cin 
    cout << "With <windows.h>" << endl; 
    cout << "input any char "<< endl; // <iostream> 
    cin >> s; 
 
    // Print output 
    cout << "You input char is  "+s << endl; 

    cout << "done in "+std::to_string(tm)+" sec" << endl; 
    Sleep(tm); // "windows.h"
    return 0; 
}