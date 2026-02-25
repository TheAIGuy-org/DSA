#include<iostream>
using namespace std;

int main(){
    int n,i, count;
    cout<<"Enter the number of levels you want: ";
    cin>>n;
    i=1;
    count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<' ';
            j+=1;
            count+=1;
        }
        cout<<endl;
        i+=1;
    }
}