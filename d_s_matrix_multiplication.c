#include<stdio.h>
int main()
    {
        int sum;
        int n;
        int m;
        int m1;
        int n1;
        printf("Enter the order of first Matrix \n");
        scanf("%d",&m);
        scanf("%d",&n);

        printf("Enter the order of Second  Matrix \n");
        scanf("%d",&m1);
        scanf("%d",&n1);

        int  mat1[m][n];
        int  mat2[m1][n1];

        printf("Enter the first array\n");
    
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            scanf("%d",&mat1[i][j]);
        }

        printf("Enter Second array\n");
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n1;j++)
            scanf("%d",&mat2[i][j]);
        }


        printf("First Matrix is\n ");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++){
            printf("%d",mat1[i][j]);
            }
            printf("\n");
        }

         printf("Second Matrix is \n");
            for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n1;j++){
            printf("%d ",mat2[i][j]);
            }
            printf("\n");
        }
       
        printf("The Multiplication of two array is \n");

        if(n==m1)
        {
            int arr[m][n1];
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n1;j++)
                {
                    sum=0;
                    for(int k=0;k<n;k++)
                    {
                        sum =sum+(mat1[i][k]*mat2[k][j]);
                    }
                    arr[i][j]=sum;
                }
            }
            
               for(int i=0;i<m;i++)
        {
            for(int j=0;j<n1;j++){
            printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
            
        }
        else{
            printf("The matrix multiplication is not valid\n");
        }
    }
