#include<stdio.h>
int main()
    {
     int m;
     int n;
     int sum=0;
        printf("Enter the order of first Matrix \n");
        scanf("%d",&m);
        scanf("%d",&n);

       

        int  mat1[m][n];
    

        printf("Enter the first array\n");
    
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            scanf("%d",&mat1[i][j]);
        }


        printf("First Matrix is\n ");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++){
            printf(" %d",mat1[i][j]);
            }
            printf("\n");
        }

        printf("The diagonal of a matrix is\n");


        for(int i=0;i<m;i++)
        {
            for(int j=n;j>=0;j--){
               if(j==n-i-1)
               {
                sum=sum+mat1[i][j];
                printf("%d ",mat1[i][j]);
               }
            }
            printf("\n");
        }
        
        printf("The addition of left diagonals is %d",sum);


       
    }
