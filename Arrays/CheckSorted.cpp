#include<iostream>
using namespace std;

bool CheckSortedArray(int arr[], int size){
    int first=0;
    for(int second=1;second<size;second++){
        if(arr[first]>arr[second]){
            return false;
        }else{
            first++;
        }
    }
    return true;
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
    if(CheckSortedArray(a, n)){
        cout<<"The array is sorted in non decrement order."<<endl;
    }else{
        cout<<"The array is not sorted in non decrement order."<<endl;
    }
}