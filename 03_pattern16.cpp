#include <iostream>
using namespace std;
int main(){
    int i ,j,n;
    cin>> n;
    for(i = 1; i<= n; i++){
        for(j = 1; j<=i; j++){
            char ch = 'A'+ i+j-2;
            cout<< ch<<" ";
        }
        cout<< endl;
    }
}
