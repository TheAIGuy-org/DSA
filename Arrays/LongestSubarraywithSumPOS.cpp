#include<iostream>
#include<vector>
using namespace std;


int LongestSubarraywithSumPOS(int arr[], int size, int k){
    int sum=0, max_length=0, i=0,j=0;

    while(j<size){
        
        sum+=arr[j];

        while(sum>k && i<=j){
            sum-=arr[i];
            i++;
        }
        if(sum==k){
            max_length=max(max_length, j-i+1);
        }
        j++;
    }
return max_length;
}
int main(){
    int n, k;

    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];

    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter the value of k: ";
    cin>>k;

    cout<<"Length of the longest subarray with sum equal to k is: "<<LongestSubarraywithSumPOS(a, n, k);
}