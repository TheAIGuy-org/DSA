#include<iostream>
#include<vector>
using namespace std;

int MaxConsecutiveOnes(int arr[], int size){
    int count=0,max_count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            count++;
            max_count=max(max_count,count);
        }else{
            
            count=0;
        }
    }
    return max_count;
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

    cout<<"Maximum number of consecutive ones in the array is: "<<MaxConsecutiveOnes(a, n);
}