#include <stdio.h>
int add(int a, int b){
  int sum=a+b;
  return sum;
}
int main(void) {
  printf("Hello World\n");
  int num1=10, num2=20;
  int result=add(num1, num2);
  printf("addition of two number is %d", result);
  return 0;
}