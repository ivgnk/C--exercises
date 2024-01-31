// http://cppstudio.com/post/1137/
#include <iostream>
#include <cmath>
using namespace std; 

int main() 
{ double x = 14.86, intPart, fractPart; 
fractPart = modf(x, &intPart); 
cout << x << " = " << intPart << " + " << fractPart << endl; 
x = -31.201; 
fractPart = modf(x, &intPart); 
cout << x << " = " << intPart << " + " << fractPart << endl; 
return 0; }
