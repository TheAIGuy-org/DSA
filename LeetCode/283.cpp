#include<iostream>
using namespace std;

void MoveZeroesToEnd(int arr[], int size){
    int i=0;
    for(int j=0;j<size;j++){
        if(arr[j]!=0){
            arr[i]=arr[j];
            i++;
        }
    }
    while(i<size){
        arr[i]=0;
        i++;
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
    MoveZeroesToEnd(a, n);
    cout<<"The array after moving zeroes to the end is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}