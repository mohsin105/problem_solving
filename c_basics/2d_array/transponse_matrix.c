#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int mat_arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&mat_arr[i][j]);
        }
    }

    //Normal Printing
    printf("Original matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",mat_arr[i][j]);
        }
        printf("\n");
    }

    //print transpose matrix
    for(int j=0;j<col;j++)
    {
        for(int i=0;i<row;i++)
        {
            printf("%d ",mat_arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}