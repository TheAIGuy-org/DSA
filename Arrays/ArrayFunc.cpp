#include<iostream>
using namespace std;

void ArrayFunc(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the number: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout << "The array is: ";
ArrayFunc(a, n);
cout << endl;
    
}