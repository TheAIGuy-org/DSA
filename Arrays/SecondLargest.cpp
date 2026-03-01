#include<iostream>
using namespace std;

int secondLargest(int arr[], int size){
    int first=-1;
    int second=-1;
    for(int i=0;i<size;i++){
        if(first<arr[i]){
            second=first;
            first=arr[i];
        }else if(arr[i]<first && arr[i]>second){
            second=arr[i];
        }
    }
    return second;
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
    int result=secondLargest(a, n);
    cout<<"The second largest element in the array is: "<<result<<endl;
}