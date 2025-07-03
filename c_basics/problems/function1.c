#include <stdio.h>


int multiply(int num1, int num2)
{
  return num1*num2;
}
int main(void) {

  int result=multiply(4,5);
  printf("multiplication result is = %d\n", result);
  
  printf("Hello World\n");
  return 0;
}