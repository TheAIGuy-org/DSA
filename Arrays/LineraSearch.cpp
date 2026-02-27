#include<iostream>
using namespace std;

void LinearSearch(int arr[], int size, int searchKey){
    for(int i=0;i<size;i++){
        if(arr[i]==searchKey){
            cout<<"Element found at index: "<<i<<endl;
            return;
        }
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
    int searchValue;
    cout<<"Enter the element you want to search: ";
    cin>>searchValue;
    LinearSearch(a, n, searchValue);

}