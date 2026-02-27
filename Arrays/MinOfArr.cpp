#include<iostream>
using namespace std;

int MinOfArr(int a[], int size){
    int min=a[0];
    for(int i=1;i<size;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    return min;
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
    int ans=MinOfArr(a, n);
    cout<<"Minimum element in your array is: "<<ans<<endl;
}