#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i <=n; i++){
        int count =1;
        for(j=1; j<=n-i+1; j++){
            cout<< " ";
        }
        for(j=1;j<=i;j++){
            // cout<< count;
            cout<<count;
            count++;
                
        }
        
        //count = count -2;
        // for(j=1;j<i;j++){
        //     cout<< count;
        //     count--;
        // }/
        for(j = i-1; j>0;j--){
            cout<<j;
        }
        cout<<endl;
       }
}