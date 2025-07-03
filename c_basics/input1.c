#include <stdio.h>

int main(void) {
  printf("Hello World\n");

  int num1;
  int num2; 

  printf("enter the first number "); 
  scanf("%d", &num1); 

  printf("the first number is %d\n", num1);
  

  printf("enter the second number ");
  scanf("%d", &num2);

  printf("the second number is %d\n", num2); 

  int sum= num1+num2; 

  printf(" summation result is %d\n", sum);
  
  

  


  
  return 0;
}