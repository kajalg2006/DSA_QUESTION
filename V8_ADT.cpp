#include <iostream>
using namespace std;
struct myArray{
    public:
    int total_size;
    int used_size;
    int *ptr;
};

void createArray (struct myArray *a , int tsize , int usize){
    // (*a).total_size= tsize;
    // (*a).used_size = usize;
    // (*a).ptr = (int*)malloc(tsize * sizeof(int));
    a->total_size= tsize;
    a->used_size = usize;
    a->ptr = (int*)malloc(tsize * sizeof(int));
}

void show(struct myArray *a){
for(int i =0; i< a->used_size; i++){
    cout << (a->ptr)[i];
}
}

void setval(struct myArray *a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
    cout<< "eter element "<< i<< endl;
    cin>> n;
    (a->ptr) [i]= n;
        
    }
    

}
int main(){
    
 struct myArray marks;
 createArray( &marks, 10, 2);
    setval(&marks);
    show(&marks);
    return 0;
}