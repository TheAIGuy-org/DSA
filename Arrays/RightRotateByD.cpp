#include<iostream>
using namespace std;

void RightRotateByDplaces(int arr[], int size, int d){
    d=d%size;

    int start=0;
    int end=size-d-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    start=size-d;
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
    cout<<"Enter the number of places to right rotate: ";
    cin>>d;
    RightRotateByDplaces(a, n, d);
    cout<<"The array after right rotation by "<<d<<" places is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}