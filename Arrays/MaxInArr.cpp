#include<iostream>
using namespace std;

int MaxOfArr(int a[], int size){
    int max=a[0];
    for(int i=1;i<size;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
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
    int ans=MaxOfArr(a, n);
    cout<<"Maximum element in your array is: "<<ans<<endl;
    
}