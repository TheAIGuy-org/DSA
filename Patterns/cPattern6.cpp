#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the number of levels you want: ";
    cin>>n;
    i=1;
    char c=65+(n-1);
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<c<<' ';
            j+=1;
            c+=1;
        }
        cout<<endl;
        c=65+(n-i-1);
        i+=1;
    }
}