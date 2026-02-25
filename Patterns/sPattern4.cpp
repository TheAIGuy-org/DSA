#include<iostream>
using namespace std;

int main(){
    int n, i;
    cout<<"Enter the number of levels you want: ";
    cin>>n;
    i=n;
    while(i>0){
        int j=1;
        while(j<=i){
            cout<<'*';
            j+=1;
        }         
        cout<<endl;
        i-=1;
    }
}