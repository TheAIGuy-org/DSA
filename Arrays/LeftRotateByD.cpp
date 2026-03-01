#include<iostream>
using namespace std;

void LeftRoteateByDplaces(int arr[], int size, int d){
    int start=0;
    int end=d-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    start=d;
    end=size-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    start=0;
    end=size-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout<<"The array after left rotation by "<<d<<" places is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
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
    int d;
    cout<<"Enter the number of places to left rotate: ";
    cin>>d;
    LeftRoteateByDplaces(a, n, d);
}