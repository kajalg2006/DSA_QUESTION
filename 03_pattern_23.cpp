#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i= 1; i<=n;i++){
        for(j= 1; j<=n-i+1;j++){
            cout<<j;
        }

        for(j=1;j<=2*(i-1);j++){
            cout<<"*";
        }
         for(j= n-i+1; j>0;j--){
             cout<<j;
         }
        // for(j=i;j<=2*(i-1);j++){
        //     cout<<"*";
        // }
        cout<< endl;
    }
}