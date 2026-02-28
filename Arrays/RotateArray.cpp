#include<iostream>
using namespace std;

void RotateArray(int arr[], int size){
    int j=size-1;
    for(int i=0;i<size;i++){
        swap(arr[i], arr[j]);
    }
    cout<<"The rotated array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
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
    RotateArray(a, n);
}