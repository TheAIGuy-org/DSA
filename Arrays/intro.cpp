#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array you want: ";
    cin>>n;
    int a[n];
    cout<<"Enter the number: ";
    for(int i=0;i<n;i++){    
        cin>>a[i];
    }

    cout<<"The array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}