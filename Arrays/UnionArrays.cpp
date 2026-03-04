// #include<iostream>
// #include<set>
// #include<vector>
// using namespace std;

// void UnionOfTwoArrays(int arr1[], int arr2[], int size1, int size2){
//     set<int> s;
//     vector<int> unionArr;

//     for(int i=0;i<size1;i++){
//         s.insert(arr1[i]);
//     }
//     for(int i=0;i<size2;i++){
//         s.insert(arr2[i]);
//     }

//     for(auto it:s){
//         unionArr.push_back(it);
//     }

//     cout<<"The union of the two arrays is: ";
//     for(int i=0;i<unionArr.size();i++){
//         cout<<unionArr[i]<<" ";
//     }
// }

// int main(){
//     int n1, n2;
//     cout<<"Enter the size of the first array: ";
//     cin>>n1;
//     int a[n1];
//     cout<<"Enter the elements of the first array: ";
//     for(int i=0;i<n1;i++){
//         cin>>a[i];
//     }
//     cout<<"Enter the size of the second array: ";
//     cin>>n2;
//     int b[n2];
//     cout<<"Enter the elements of the second array: ";
//     for(int i=0;i<n2;i++){
//         cin>>b[i];
//     }
//     UnionOfTwoArrays(a, b, n1, n2);
// }

#include<iostream>
#include<vector>
using namespace std;

void UnionOfTwoArrays(int arr1[], int arr2[], int size1, int size2){
    vector<int> resultArr;
    int n1=resultArr.size();

    int i=0;
    int j=0;

    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            if(resultArr.size()==0 || resultArr.back()!=arr1[i]){
                resultArr.push_back(arr1[i]);
            }
            i++;
        }else{
            if(resultArr.size()==0 || resultArr.back()!=arr2[j]){
                resultArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i<size1){
        if(resultArr.size()==0 || resultArr.back()!=arr1[i]){
            resultArr.push_back(arr1[i]);
        }
        i++;
    }
    while(j<size2){
        if(resultArr.size()==0 || resultArr.back()!=arr2[j]){
            resultArr.push_back(arr2[j]);
        }
        j++;
    }

    cout<<"The union of the two arrays is: ";
    for(int i=0;i<resultArr.size();i++){
        cout<<resultArr[i]<<" ";
    }
}

int main(){
    int n1, n2;
    cout<<"Enter the size of the first array: ";
    cin>>n1;
    int a[n1];
    cout<<"Enter the elements of the first array: ";
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"Enter the size of the second array: ";
    cin>>n2;
    int b[n2];
    cout<<"Enter the elements of the second array: ";
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    UnionOfTwoArrays(a, b, n1, n2);
}