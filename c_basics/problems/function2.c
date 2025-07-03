#include <stdio.h>
int add(int a, int b){
  int sum= a+b;
  printf("the sum of two input number is %d", sum);
  return 0;
}
int main(void) {
  int num1=10, num2=20;
  printf("Hello World\n");
  add(num1, num2);
  return 0;
}