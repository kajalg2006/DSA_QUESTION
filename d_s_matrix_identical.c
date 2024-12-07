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

        


        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++){
               if(i==j)
               {
                 if(mat1[i][j]==1)
                 {
                    sum=1;
                 }
                 else{
                    sum=0;
                    break;
                 }
               }
               
                 else if(mat1[i][j]==0)
                 {
                    sum =1;
                 }
                 else{
                    sum=0;
                    break;
                 }
                 if(sum==0)
                 {
                    break;
                 }
               
            }
            printf("\n");
        }

        if(sum==1)
        {
            printf("The matrix is identical");
        }
        else{
            printf("The matrix is not identical");

        }
        
        


       
    }
