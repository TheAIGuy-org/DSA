#include<iostream>
using namespace std;

void BubbleSort(int arr[], int size){
    for(int i=size-1;i>=1;i--){
        int did_swap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                did_swap=1;
            }
        }
        if(did_swap==0){
            break;
        }
    }
    cout<<"Sorted array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;

    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];

    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    BubbleSort(a, n);
}