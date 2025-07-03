#include<stdio.h>
int main()
{
    int rowA,colA,rowB,colB;
    scanf("%d %d",&rowA,&colA);
    int mat_A[rowA][colA];
    
    
    //Taking input of matrix A
    for(int i=0;i<rowA;i++)
    {
        for(int j=0;j<colA;j++)
        {
            scanf("%d",&mat_A[i][j]);
        }
    }


    scanf("%d %d",&rowB,&colB);
    int mat_B[rowB][colB];
    //Taking input of matrix B
    for(int i=0;i<rowB;i++)
    {
        for(int j=0;j<colB;j++)
        {
            scanf("%d",&mat_B[i][j]);
        }
    }
    int mat_C[rowA][colB];
    if(colA!=rowB)
    {
        printf("Matrix Multiplication Not Possible!!!");
    }
    else
    {
        for(int i=0;i<rowA;i++)
        {
            for(int j=0;j<colB;j++)
            {
                for(int k=0;k<colB;k++)
                {
                    mat_C[i][j]+=mat_A[i][k]*mat_B[k][j];
                }
            }
        }

        for(int i=0;i<rowA;i++)
        {
            for(int j=0;j<colB;j++)
            {
                printf("%d ",mat_C[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}