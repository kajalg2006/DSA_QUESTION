#include<stdio.h>
int main()
    {
        int  mat1[2][2];
        int  mat2[2][2];
        printf("Enter the first array\n");
    
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            scanf("%d",&mat1[i][j]);
        }

        printf("Enter Second array\n");
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            scanf("%d",&mat2[i][j]);
        }
        printf("First array is\n ");
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++){
            printf("%d",mat1[i][j]);
            }
            printf("\n");
        }

         printf("Second array is \n");
            for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++){
            printf("%d ",mat2[i][j]);
            }
            printf("\n");
        }
       
        printf("The addition of two array is \n");

         for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++){
            printf("%d ",mat2[i][j]+mat1[i][j]);
            }
            printf("\n");
        }
       
        


        // System.out.println("Enter the first two dimentional array");

        // int b=sc.nextInt();
        // int sum;
        // System.out.println("The sum of two number is "+sum);
    }
