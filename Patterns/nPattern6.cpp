#include<iostream>
using namespace std;

int main(){
    int n,i, count;
    cout<<"Enter the number of levels you want: ";
    cin>>n;
    count=1;
    i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count<<' ';
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}