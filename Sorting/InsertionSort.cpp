#include<iostream>
using namespace std;

void InsertionSort(int arr[], int size){
    for(int i=0;i<size;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j], arr[j-1]);
            j--;
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

    InsertionSort(a, n);
}