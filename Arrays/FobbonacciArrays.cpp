#include<iostream>
using namespace std;

int nthFibonacciElement( int n){
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n-1];
}

int main(){
    int n;
    cout<<"Enter the number of elements in the Fibonacci series: ";
    cin>>n;
    cout<<"The "<<n<<"th element in the Fibonacci series is: "<<nthFibonacciElement(n)<<endl;
}