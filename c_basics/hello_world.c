#include<stdio.h>
int main()
{
    int a=50;
    int b=60,c=70;
    float fl=6.34597;
    printf("Hello World: %d \n %d %d \n",a, b,c);
    printf("Float Number: %f",fl);
    printf("\nFloat Number: %0.2f\n",fl);
    
    
    int arr[5]={10,20,30,40,50};

    //Manually finding array length using size_of() operator
    printf("Size of entire array: %lu\n",sizeof(arr));
    printf("Size of one element of array:  %lu\n",sizeof(arr[0]));

    int arr_len=sizeof(arr)/sizeof(arr[0]);
    printf("So, length of array/aray size: %d \n", arr_len);
    
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    //so, to dynamically controll the loop for an array
    for(int i=0;i< sizeof(arr)/sizeof(arr[0]);i++)
    {
        printf("%d ",arr[i]);
    }

    char nm_literal[7]="mohsin";
    char nm_manual[7]={'m','o','h','s','i','n','\0'};
    printf("\n%s\n",nm_literal);
    printf("%s\n",nm_manual);
    for(int i=0;i<6;i++)
    {
        printf("%c ",nm_literal[i]);
    }

    return 0;
}