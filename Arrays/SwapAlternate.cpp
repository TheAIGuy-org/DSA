#include<iostream>
using namespace std;

void SwapAlternate(int a[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(a[i], a[i+1]);
        }
    }
    cout<<"The array after swapping is: ";
    for(int i=0;i<size;i++){
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
    SwapAlternate(a, n);
}