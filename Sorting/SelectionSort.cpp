#include<iostream>
using namespace std;

void SelectionSort(int arr[], int size){
    for(int i=0;i<=size-2;i++){
        int min_index=i;
        for(int j=i;j<size;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        swap(arr[i], arr[min_index]);
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

    SelectionSort(a, n);

}