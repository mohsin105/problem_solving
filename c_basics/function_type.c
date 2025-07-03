#include<stdio.h>

/*function that takes arguement, return something
int find_mx(int m,int n)
{
  int mxm;
  if(m>n) mxm=m;
  else mxm=n;
  return mxm;
}*/

/*fucntion that takes arguement, but doesnt return anything to main function rather gives direct output inside the custom function itself
void f_mx(int m,int n)
{
  if(m>n) printf("%d is the bigger number",m);
  else printf("%d is the bigger number",n); 
}*/
/*function that doesnt take in arguement but returns something to main function. here, function takes input inside the custom function itself, not from main function
int find_max()
{
  int m,n,mxm;
  scanf("%d %d",&m,&n);
  if(m>n) mxm=m;
  else mxm=n;
  return mxm;
}*/
int main()
{
  int a=20,b=18;
  /*code inside main fun for a fun that takes argument and returns something
  int mx=find_mx(a,b);
  printf("%d",mx); */

  //code inside main fun for a fun that takes argument but doesnt returns something, no need to store the function in a variable. 
  //f_mx(a,b);

  
/*code inside main fun for a fun that doesnt take in argument but returns something to main function 
  int mx=find_max();
  printf("%d is the bigger number",mx);*/
  return 0;
}