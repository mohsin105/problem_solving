#include <stdio.h>

int main(void) {
  int i;
  printf("Enter a number: \n");
  scanf("%d", &i);
  if(i%2==0)
  {
    printf("the number %d is an even number\n", i);
  }
  else{
    printf("the number %d in an odd number\n", i);
  }
  return 0;
}