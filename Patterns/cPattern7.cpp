#include<iostream>
using namespace std;
 int main(){
    int n,i;
    cout<<"Enter the number of levels you want: ";
    cin>>n;
    char c=65;
    i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<c<<' ';
            j+=1;
            c+=1;
        }
        cout<<endl;
        c=65+i;
        i+=1;
    }
 }