#include<iostream>
using namespace std;

int RemoveDuplicateFromSortedArray(int arr[], int size){
    int slow=0;
    for(int fast=1;fast<size;fast++){
        if(arr[slow]!=arr[fast]){
            slow++;
            arr[slow]=arr[fast];
        }
    }
    return slow+1;
}

int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;

    int a[n];
    cout<<"Enter the number in non decrement order: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int newSize=RemoveDuplicateFromSortedArray(a, n);
    cout<<"The new size of the array is without duplicates: "<<newSize<<endl;
}