#include <iostream>
using namespace std;
int main(){
    // int  i , n, j;
    //  cin>> n;
    //  for(i =1; i<= n; i++){
    //     int value = i;
    //     for(j =1; j<=i;j++ ){
    //         cout<< value<< " ";
    //         value++;
    //     }
    //     cout<< endl;
    //  }

    int i,j, n;
    cin>> n;
    for(i=1; i<=n;i++){
        for(j=i; j< i*2 ; j++){
            cout<< j<<" ";
        }
        cout <<endl;
    }
    return 0 ;
}