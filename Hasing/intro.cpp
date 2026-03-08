#include<iostream>
#include<map>
using namespace std;

int CountNumberInArray(int arr[], int size, int num){
    map<int, int>mp;
    for(int i=0;i<size;i++){
        mp[arr[i]]++;
    }
    return mp[num];
}

int countCharInString(string str, char ch){
    map<char, int>mp;
    for(int i=0;i<str.length();i++){
        mp[str[i]]++;
    }
    return mp[ch];

}

int main(){
    int n, num;

    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];

    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter the number to count: ";
    cin>>num;

    cout<<"The number "<<num<<" appears "<<CountNumberInArray(a, n, num)<<" times in the array.";

    string str;
    char ch;
    cout<<"\nEnter a string: ";
    cin>>str;
    cout<<"Enter a character to count: ";
    cin>>ch;
    cout<<"The character '"<<ch<<"' appears "<<countCharInString(str, ch)<<" times in the string.";
}
