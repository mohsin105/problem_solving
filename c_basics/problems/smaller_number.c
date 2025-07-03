#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  int num1,num2;
  printf("Enter first number: \n");
  scanf("%d",&num1);
  printf("Enter second number: \n");
  scanf("%d", &num2);
  if(num1>num2)
  {
    printf("first number %d is the bigger number",num1);
  }
  else if(num1<num2)
  {
    printf("second number %d is the bigger number",num2);
  }
  
  return 0;
}