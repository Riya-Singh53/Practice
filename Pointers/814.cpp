#include <iostream>
using namespace std;

int main(){
    int number[10] {1,2,3,4,5,6,7,8,9,10};
    int* nPtr;
    nPtr = &number[0];
    
    cout << "Address of first element of array: " <<&number[10]<< endl;
    cout <<"Address stored in nPtr: "<<nPtr<<endl;
    
    cout<<"Orginal Array: "<<endl;
    for(size_t i{0}; i<10; i++){
        cout<<number[i]<<" ";
    }
    
    for(size_t i{0}; i<10; i++){
        *(nPtr+i) = *(nPtr+i) * *(nPtr+i);
    }
    
    cout<<"Modified Array: "<<endl;
    for(size_t i{0}; i<10; i++){
        cout<<"Address: "<<(nPtr+i) <<"\tValue: "<< *(nPtr+i)<<endl;
    }
    return 0;
}
