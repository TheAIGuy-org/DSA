#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the number of levels you want: ";
    cin>>n;
    i=1;
    while(i<=n){
        int space=0;
        while(space<=i-1){
            cout<<" ";
            space+=1;
        }
        int j=n-i;
        while(j>0)
        {
            cout<<i;
            j-=1;

        }
        cout<<endl;
        i+=1;
    }
}