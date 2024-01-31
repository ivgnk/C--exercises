#include <iostream> 
#include <string> 
#include "windows.h"
using namespace std; 
  
// Driver Code 
int main() 
{ 
    int i; 
    string s;
    // Take input using cin 
    cout << "input any char "<< endl;
    cin >> s; 
  
    // Print output 
    cout << "You input char is  "+s << endl; 
    cout << "done" << endl; 
    Sleep(6000); // "windows.h"
    return 0; 
}