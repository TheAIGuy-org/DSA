// #include<iostream>
// #include<vector>
// using namespace std;

// void IntersectionOfTwoArrays(int arr1[], int arr2[], int size1, int size2){
//     vector<int> ans;
//     vector<int> visited(size2, 0);  

//     for(int i=0; i<size1; i++){
//         for(int j=0; j<size2; j++){
//             if(arr1[i]==arr2[j] && visited[j]==0){
//                 ans.push_back(arr1[i]);
//                 visited[j]=1;
//                 break;
//             }
//             if(arr1[i]<arr2[j]){
//                 break;
//             }
//         }
//     }

//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
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

//     IntersectionOfTwoArrays(a, b, n1, n2);
// }

#include<iostream>
#include<vector>
using namespace std;

void IntersectionOfTwoArrays(int arr1[], int arr2[], int size1, int size2){
    vector<int>ans;
    int i=0,j=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr2[j]<arr1[i]){
            j++;
        }else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for(int k=0; k<ans.size(); k++){
        cout<<ans[k]<<" ";
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

    IntersectionOfTwoArrays(a, b, n1, n2);
}