#include <stdio.h>
#include<stdbool.h>

bool ageCheck(int a, int b){
  bool c=a==b;
  return c;
}
int main(void) {
  printf("Hello World\n");
  int a=15,b=15;
  if(ageCheck(a,b))
    {printf("Age is equal");}
  else
    {printf("age is not equal\n");}
  return 0;
}