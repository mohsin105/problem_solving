#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",row,col);
    int mat_arr[row][col];

    //taking input of 2d array
    for (int i = 0; i < row; i++)//takes input row by row. 
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&mat_arr[i][j]);//first goes to a row, inputs all column element of that row, than goes to next row,
        }
        
    }


    //printing 2d array
    for(int i=0;i<row;i++)
    {
        for (int j = 0; i < col; j++)
        {
            printf("%d ",mat_arr[i][j]);
        }
        printf("\n");
    }

    //printing a single specific column
    printf("printing only third column ");
    for(int i=0;i<row;i++)
    {
        printf("%d \n",mat_arr[i][2]);
    }
    
    return 0;
}