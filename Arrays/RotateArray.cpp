//Right Rotate by 1
// #include<iostream>
// using namespace std;

// void RotateArray(int arr[], int size){
//     int j=size-1;
//     for(int i=0;i<size;i++){
//         swap(arr[i], arr[j]);
//     }
//     cout<<"The rotated array is: ";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the size of an array: ";
//     cin>>n;
//     int a[n];
//     cout<<"Enter the number: ";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     RotateArray(a, n);
// }

#include<iostream>
using namespace std;

void LeftRotateByOnePlace(int arr[], int size){
    int temp=arr[0];
    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
    cout<<"The array after left rotation by one place is: ";
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
    LeftRotateByOnePlace(a, n);
}