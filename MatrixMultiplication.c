/*          MATRIX MULTIPLICATION           */

#include<stdio.h>
int main()
{
    // To define the Matrix
    printf("\n\n        MATRIX MULTIPLICATION\n\n");
    int n;
    printf("Enter the size of the square Matrix\n");
    scanf("%d", &n);
    int A[n][n];
    printf("Enter the elements of the first matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

     int B[n][n];
    printf("\nEnter the elements of the second matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // To print the Matrix
    printf("\n First Matrix :");
    for(int i=0;i<n;i++)
    {
        printf("\n         ");
        
        for(int j=0;j<n;j++)
        {
            printf("%d  ", A[i][j]);
        }
    }

    printf("\n Second Matrix :");
    for(int i=0;i<n;i++)
    {
        printf("\n         ");
        
        for(int j=0;j<n;j++)
        {
            printf("%d  ", B[i][j]);
        }
    }

    // Matrix Multiplication
    int C[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            C[i][j]=0;
            for(int k=0;k<n;k++)
            {
                C[i][j]= C[i][j] + A[i][k]*B[k][j];
            }
        }
    }

    // To print the product matrix C = AB
    printf("\n Product Matrix :");
    for(int i=0;i<n;i++)
    {
        printf("\n         ");
        
        for(int j=0;j<n;j++)
        {
            printf("%d  ", C[i][j]);
        }
        
    }

    printf("\n\n        THANK YOU\n\n\n");
    return 0;
}    
