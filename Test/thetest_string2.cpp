/* 
https://codelessons.dev/ru/printf-in-c-cplusplus/ 
*/

#include <cstdlib>
#include <stdio.h>

int main() {
  system("cls");  
  printf("1. просто строка \n");
  printf("2. целое число: %d \n", 1234);
  printf("3. дробное число: %f \n", 12.34);
  printf("4. Символ: %c  \n", 'C');
  printf("5. строка: %s \n", "C++");
  printf("6. процент: 100%% \n");
  for (int i=1; i<=5;i++) printf("%i ",i);
  printf("\n\n");  
  return 0;
}