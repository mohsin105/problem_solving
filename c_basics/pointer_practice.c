#include<stdio.h>
int main()
{
  int a=10;
  int *ptr=&a; //&a is the actual pointer-value of a variable. putting this value  &a in pointer variable *ptr 
  printf("Address through pointer variable: %p \n",ptr); //shows the pointer address of variable a
  printf("Address thought & operator: %p\n",&a); //also shows the pointer address of variable a

  printf("Value through dereferencing the pointer %d\n",*ptr); //dereferencing the pointer variable and going to the address the pointer variable points to and accessing that value of the original variable(stored in that address) 
  
  //changing the value of the original variable through dereferencing the variable
  *ptr=20;
  printf("After changing value through dereferencing the pointer: %d\n",a);

  int arr[5]={2,5,7,98,56};
  printf("%d\n",arr[0]);

  printf("%p\n",arr); //by deafault, the name of the array itself is the pointer of the first element of the array. 
  
  printf("%d\n",*arr); //so, we can access the first element by derefencing the array name
  
  
  printf("%d\n",*(arr+2));//by this method, we can also access all array elements only by adding their index. *(array_name+index)
  for(int i=0;i<5;i++)
    {
      printf("%d ",*(arr+i));
    }
  

    //similarly, array value elements can be changed by dereferencing their pointer

    *arr=30;
    printf("\n%d\n",arr[0]);
    
    *(arr+1)= 66;
    printf("%d\n",arr[1]);

  return 0;
}




/*
int myAge=43;
int* ptr= &myAge; 


Here
  myAge -> an integer variable name
  &myAge -> the keyword for the memory address of this variable myAge 

  ptr ->  pointer variables name
  int* -> data type of pointer variable ptr
  
  - here
    ptr → holds the address of the original variable
    *ptr → holds the value of the original variable

*/