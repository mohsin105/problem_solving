#include <stdio.h>

int add(int a, int b)
  {
    int addition= a+b;
    return addition; 
  }

int sub(int a, int b)
  {
    int subtraction= a-b;
    return subtraction; 
  }

int multiply(int a, int b)
  {
    int multiplication= a*b; 
    return multiplication; 
  }

float div(int a, int b)
  {
    float division= (float)a/b;
    return division;
  }

int mod(int a, int b)
  {
    int modulu=a%b; 
    return modulu; 
  }


int main(void) {

  int num1; 
  int num2; 

  printf("First number is ");
  scanf("%d", &num1);

  printf("Second number is ");
  scanf("%d", &num2);

  
  printf("Hello User\n");

  int result= add(num1, num2);
  printf("addition is %d\n", result);

  int subResult= sub(num1, num2);
  printf("subtraction is %d\n", subResult);

  int multiplyResult= multiply(num1, num2);
  printf("multiplication is %d\n", multiplyResult); 

  float divResult= div(num1, num2); 
  printf(" division is %.3f\n", divResult);


  int modResult= mod(num1, num2); 
  printf("modulus is %d\n", modResult); 

  

  
  
  return 0;
}