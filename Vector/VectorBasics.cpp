#include<iostream>
#include<vector>
using namespace std;

void outputVector(vector<int> num){
    for(int item: num){
        cout<<item<<" ";
    }
    cout<<endl;
}

void inputVector(vector<int>& num){
    for(int& item: num){
        cin >> item;
    }
}

int main(){
    vector<int> num1(5);
    vector<int> num2(7);
    
    cout << "Display the vector: " << endl;
    outputVector(num1);
    outputVector(num2);
    
    cout<<"\nTake a user input in vector: "<<endl;
    cout<<"for num1: ";
    inputVector(num1);
    cout<<"for num2: ";
    inputVector(num2);
    
    cout<<"\nDisplay the user input in vector: "<<endl;
    cout<<"for num1: ";
    outputVector(num1);
    cout<<"for num2: ";
    outputVector(num2);
    
    num1 = num2;
    
    outputVector(num1);
    outputVector(num2);
    
    num1[5] = 1000;
    outputVector(num1);
    return 0;
}
