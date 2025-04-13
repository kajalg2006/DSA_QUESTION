#include <iostream>
using namespace std;
int main(){
    int i ,j,n;
    cin>> n;
    for(i =1;i<= n;i++){
        for(j= 1; j<=n;j++){
            char ch = 'A'+ j-2+i;
            cout<< ch<<" ";
        }
        cout <<endl;
    }
}