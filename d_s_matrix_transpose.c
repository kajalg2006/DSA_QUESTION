#include<stdio.h>
int main()
    {
        int  mat1[2][2];
        int  mat2[2][2];
        printf("Enter the Matrix\n");
    
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            scanf("%d",&mat1[i][j]);
        }

       
        printf("First array is\n");
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++){
            printf("%d ",mat1[i][j]);
            }
            printf("\n");
        }

        printf("The transose of a matrix is\n");
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++){
               mat2[i][j]=mat1[j][i];
            }
            
        }

         for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++){
                printf("%d ",mat2[i][j]);
            }
            printf("\n");
            
        }
        
    }
