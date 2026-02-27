#include<iostream>
using namespace std;

void ReverseArr(int a[], int size){
    // int temp=0;
    // for(int i=0;i<size/2;i++){    
    //     temp=a[i];
    //     a[i]=a[size-i-1];
    //     a[size-i-1]=temp;
    // }

    int start=0, end=size-1;
    while(start<=end){
        swap(a[start], a[end]);
        start++;
        end--;
    }
    cout<<"The reversed array is: ";
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
    ReverseArr(a, n);
}