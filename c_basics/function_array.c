#include<stdio.h>
void print_arr(int *ar,int n)//you are recieving the pointer of the first element of the array. 
//though the passed value remains same, parameter can be set as an array like int ar[], instead of pointer variable. 
{
  for(int i=0;i<n;i++)
    {
      printf("%d\n",ar[i]);
    }
  
}
void srt_arr(int ar[],int n)
{
  for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
        {
          if(ar[i]<ar[j])
          {
            int tmp=ar[i];
            ar[i]=ar[j];
            ar[j]=tmp;
          }
        }
    }
  printf("after sorting\n");
}
int main()
{
  int arr[6];
  for(int i=0;i<6;i++)
    {
      scanf("%d",&arr[i]);
    }
  print_arr(arr,6);//you have to pass the pointer of the first element of the array. by definition, the array name itself is the pointer of the first element of the array. and also pass the array size,.
  srt_arr(arr,6);
  //now as we print the array, we will find it sorted. even if the sorting happened in custom funciton. because the custom function accessed the address of the original function and changed the values in those addresses. 
  for(int i=0;i<6;i++)
    {
      printf("%d\n",arr[i]);
    }
  return 0;
}